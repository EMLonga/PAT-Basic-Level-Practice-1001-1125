#include<iostream>
using namespace std;
int main()
{
    int N,i;
    long double num,sum=0;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>num;
        sum+=(N-i+1)*num*i;
    }
    printf("%.2llf",sum);
    return 0;
}