#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, num;
    char c;
    int cnt=1;
    cin >> c;
    getchar();
    getline(cin, s1);
    if (c == 'C')
    {
        char pre=s1[0];
        for (int i = 1; i < s1.size(); i++)
        {
            if(s1[i]==pre)
            {
                cnt++;
            }
            else{
                if(cnt>=2) cout<<cnt;
                cout<<pre;
                cnt=1;
                pre=s1[i];
            }
        }
        if(cnt>=2) cout<<cnt;
        cout<<pre;
    }
    else if(c=='D')
    {
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]>='0' && s1[i]<='9'){
            num+=s1[i];
            }
            else
            {
                if(num.length()>0) cnt=stoi(num);
                while(cnt--) cout<<s1[i];
                cnt=1;
                num="";
            }
        }
    }
    return 0;
}