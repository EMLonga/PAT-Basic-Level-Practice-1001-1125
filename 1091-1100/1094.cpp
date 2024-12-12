#include<bits/stdc++.h>
using namespace std;
int isprime(int num){
    if(num==0 || num==1) return 0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0) return 0;
    }
    return 1;
}
int main()
{
    string s1;
    int k,L;
    cin>>L>>k>>s1;
    for(int i=0;i<=L-k;i++)
    {
        string t=s1.substr(i,k);
        int num=stoi(t);
        if(isprime(num))
        {
            cout<<t;
            return 0;
        }
    }
    cout<<"404\n";
    return 0;
    

}