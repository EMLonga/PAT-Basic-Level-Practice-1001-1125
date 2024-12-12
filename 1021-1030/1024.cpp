#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int idx;
    idx=s.find('E');
    string num=s.substr(1,idx-1);
    string e=s.substr(idx+1);
    int exp;
    stringstream ss;
    ss<<e;
    ss>>exp;
    if(exp>=0)
    {
        if(s[0]=='-')
        {
            cout<<'-';
        }
        ++exp;
        bool flag=true;
        for(int i=0;i<num.length();i++)
        {
            if(num[i]=='0' && flag)
            {
                exp--;
            }
            else if(num[i]!='.')
            {
                flag=false;
                cout<<num[i];
                --exp;
            }
            if(exp==0 && i!=num.length()-1)
            {
                cout<<'.';
            }
        }
        while(exp>=0 && exp--)
        {
            cout<<'0';
        }
    }
    else
    {
        if(s[0]=='-')
        {
            cout<<'-';
        }
        cout<<"0.";
        ++exp;
        while(exp++)
        {
            cout<<'0';
        }
        for(int i=0;i<num.length();i++)
        {
            if(num[i]!='.')
            {
                cout<<num[i];
            }
        }
    }
    return 0;
}