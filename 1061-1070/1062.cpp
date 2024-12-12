#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int n)
{
    if(m<n)
    {
        int temp=n;
        n=m;
        m=temp;
    }
    int r=m%n;
    while(r)
    {
        m=n;
        n=r;
        r=m%n;
    }
    return n;
}
void bound(int n1,int m1,int n2,int m2,int k,int& L,int& R)
{
    L=n1*k/m1+1;
    R=n2*k/m2;
    if((n2*k)%m2==0)
    {
        R=R-1;
    }
}
int main()
{
    int n1,n2,m1,m2,k,L,R,flag1=0;
    scanf("%d/%d %d/%d",&n1,&m1,&n2,&m2);
    cin>>k;
    if(n1*m2>n2*m1) bound(n2,m2,n1,m1,k,L,R);
    else bound(n1,m1,n2,m2,k,L,R);
    for(int i=L;i<=R;i++)
    {
        if(gcd(k,i)==1)
        {
            if(flag1) cout<<' ';
            else flag1=1;
            cout<<i<<'/'<<k;
        }
    }
    return 0;
}