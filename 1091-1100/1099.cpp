#include<bits/stdc++.h>
using namespace std;
int isprime(long long num)
{
    if(num<2) return 0;
    for(long long i=2;i*i<=num;i++)
    {
        if(!(num%i)) return 0;
    }
    return 1;
}
int main()
{
    long long n;
    cin>>n;
    if(isprime(n-6) && isprime(n))
    cout<<"Yes\n"<<n-6;
    else if(isprime(n+6) && isprime(n))
    cout<<"Yes\n"<<n+6;
    else{
        int i;
        for(i=n+1;;i++)
        {
            if(isprime(i) && isprime(i-6)) break;
            if(isprime(i) && isprime(i+6)) break;
        }
        cout<<"No\n"<<i;
    }
}