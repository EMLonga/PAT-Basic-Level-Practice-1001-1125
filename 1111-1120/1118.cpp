#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<string,int> mp={{"ling",0},{"yi",1},{"er",2},{"san",3},{"si",4},{"wu",5},{"liu",6},{"qi",7},{"ba",8},{"jiu",9}};
    for(int i=0;i<11;i++){
        cin>>s;
        if(s.size()==1) cout<<s;
        else if(s[0]=='s' && s[1]=='q') cout<<sqrt(stoi(s.substr(4)));
        else if(mp.count(s)) cout<<mp[s];
        else{
            int a=0,b=0,j=0;
            char c;
            while(j<s.size() && isdigit(s[j])) a=a*10+s[j++]-'0';
            c=s[j++];
            while(j<s.size() && isdigit(s[j])) b=b*10+s[j++]-'0';
            switch (c)
            {
            case '+': cout<<a+b;
                break;
            case '-': cout<<a-b;
            break;
            case '*' :cout<<a*b;
            break;
            case '/': cout<<a/b;
            break;
            case '%': cout<<a%b;
            break;
            case '^':cout<<pow(a,b);
            break;
            }


        }
    }
    return 0;
}
