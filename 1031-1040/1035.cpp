#include <iostream>
#include<algorithm>
using namespace std;
#define MAXN 101
int N,c[110];
bool compare(int a[], int b[])
{
    for (int i = 0;i<N;i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
}
void copy(int a[],int b[])
{
    for(int i=0;i<N;i++)
    {
        b[i]=a[i];
    }
}
int insertsort(int a[], int b[], int c[])
{
    int flag=0;
    for(int i=1;i<N;i++)
    {
        int j=i;
        int temp=c[j];
        while(temp<c[j-1] && j>=1)
        {
            c[j]=c[j-1];
            j--;
        }
        c[j]=temp;
        if(flag==1)
        {
            return 1;
        }
        if(compare(c,b))
        flag=1;
    }
    return 0;
}
int mergesort(int a[],int b[],int c[])
{
    int d=2;
    int flag=0;
    for(int i=d;i/2<=N;i*=2)
    {
        for(int j=0;j<N;j+=i)
        {
            sort(c+j,c+min(j+i,N));
        }
        if(flag==1)
        {
            return 1;
        }
        if(compare(c,b))
        flag=1;
    }
    return 0;
}
void print_s(int c[])
{
    for(int i=0;i<N;i++)
    {
        cout<<c[i];
        if(i!=N-1)
        {
            cout<<' ';
        }
        else
        {
            cout<<'\n';
        }
    }
}
int main()
{
    cin >> N;
    int a[110]={0},b[110]={0};
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    copy(a,c);
    if(insertsort(a,b,c))
    {
        cout<<"Insertion Sort"<<endl;
        print_s(c);
    }
    else
    {
        copy(a,c);
        mergesort(a,b,c);
        cout<<"Merge Sort"<<endl;
        print_s(c);
    }
    return 0;
}