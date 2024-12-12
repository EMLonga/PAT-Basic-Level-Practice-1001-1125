#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    unordered_map<int, char> mp;
    mp[10] = 'J';
    mp[11] = 'Q';
    mp[12] = 'K';
    cin >> a >> b;
    while(a.size()<b.size()) a='0'+a;
    while(b.size()<a.size()) b='0'+b;
    int i=a.size()-1;
    for(int f1=1;i>=0;i--,f1++)
    {
        if(f1 & 1)
        {
            int tmpa=a[i]-'0';
            int tmpb=b[i]-'0';
            tmpb=(tmpb+tmpa)%13;
            if(tmpb<10) b[i]=tmpb+'0';
            else b[i]=mp[tmpb];
        }
        else
        {
            int tmp=b[i]-a[i];
            if(tmp>=0) b[i]=tmp+'0';
            else b[i]=tmp+10+'0';
        }
    }
    cout<<b<<endl;
    return 0;
}