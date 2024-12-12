#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int B,S,G,i;
    B=n/100;
    S=n/10%10;
    G=n%10;
    for(i=0;i<B;i++)cout<<"B";
    for(i=0;i<S;i++)cout<<"S";
    for(i=1;i<=G;i++)cout<<i;
    return 0;
}