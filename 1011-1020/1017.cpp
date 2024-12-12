#include<iostream>
using namespace std;
int main()
{
    string A;
    int B;
    cin>>A>>B;
    int q,r=0,flag=0;
    for(size_t i=0;i<A.size();i++)
    {
        q=r*10+A[i]-'0';
        if(!flag) flag=q/B;
        if(flag) cout<<q/B;
        r=q%B;
    }
    if(!flag)  cout<<0;
    cout<<' '<<r<<endl;
    return 0;
}