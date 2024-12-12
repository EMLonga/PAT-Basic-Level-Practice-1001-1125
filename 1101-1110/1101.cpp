#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s1,s2,ans;
    int d;
    cin>>a>>d;
    s1=a.substr(a.size()-d,d);
    s2=a.substr(0,a.size()-d);
    ans=s1+s2;
    int num1=stoi(ans);
    int num2=stoi(a);
    printf("%.2f",(double)num1/num2);
    return 0;


}