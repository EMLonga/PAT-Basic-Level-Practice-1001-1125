#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t[10000]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        t[abs(a-i)]++;
    }
    for(int i=9999;i>=0;i--)
    {
        if(t[i]>=2) cout<<i<<' '<<t[i]<<endl;
    }
    return 0;
}