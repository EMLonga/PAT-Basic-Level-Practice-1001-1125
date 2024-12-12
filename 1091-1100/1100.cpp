#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,m;
    string temp,smallx="99999999",smalla="99999999",ansa,ansx;
    cin>>n;
    unordered_set<string> record;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        record.insert(temp);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        if(record.count(temp))
        {
            cnt++;
            if(smallx>temp.substr(6,8))
            {
                smallx=temp.substr(6,8);
                ansx=temp;
            }
        }
        else if(smalla>temp.substr(6,8))
        {
            smalla=temp.substr(6,8);
            ansa=temp;
        }
    }
    cout<<cnt<<endl;
    if(cnt) cout<<ansx;
    else cout<<ansa;
    return 0;
}