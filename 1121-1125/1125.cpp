#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int main()
{ 
    string s,p;cin>>s>>p;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==p[0])v.push_back(i);
    }

    int minlen=s.size()+1,mini=0;
    //开始查找
    for(int i=0;i<v.size();i++)
    {
      int cnt=1;  //p[0]已经查找完了

        for(int j=v[i]+1;j<s.size();j++)
        {
          if(s[j]==p[cnt])cnt++;
            if(cnt==p.size()) //找完了
            {
                if(j-v[i]<minlen)
                {
                    minlen=j-v[i];
                    mini=v[i];
                }
                break;
            }
                
        }
    }

    for(int i=mini;i<=mini+minlen;i++)
    {
        cout<<s[i];
    }
    return 0;
}