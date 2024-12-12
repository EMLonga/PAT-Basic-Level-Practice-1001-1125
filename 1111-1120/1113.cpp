#include <bits/stdc++.h>
using namespace std;
string s1, s2, ans;
int num1,num2,carry,now,idx;
int main()
{
    cin>>s1>>s2;
    if(s1.size()<s2.size()) swap(s1,s2);
    string c(s1.size()-s2.size(),'0');
    s2=c+s2;
    ans.resize(s1.size());
    for(int i=s1.size()-1;i>=0;i--){
        if(isdigit(s1[i])) num1=s1[i]-'0';
        else if(s1[i]>='a' && s1[i]<='z') num1=s1[i]-'a'+10;
        if(isdigit(s2[i])) num2=s2[i]-'0';
        else if(s2[i]>='a' && s2[i]<='z') num2=s2[i]-'a'+10;
        now=(carry+num1+num2)%30;
        carry=(carry+num1+num2)/30;
        if(now<10) ans[i]=(char)(now+'0');
        else ans[i]=(char)(now-10+'a');
    }
    if(carry) ans='1'+ans;
    while(idx<ans.size()-1 && ans[idx]=='0') ++idx;
    while(idx<ans.size()) cout<<ans[idx++];
    return 0;
}