#include<bits/stdc++.h>
using namespace std;
int isprime(int num){
    if(num<2) return 0;
    for(int i=2;i*i<=num;i++)
    if(num%i==0) return 0;
    return 1;
}
int main(){
    string s;
    cin>>s;
    int num=s.size();
    while(s.size())
    {
        int key=isprime(stoi(s));
        cout<<s<<' '<<(key==1?"Yes":"No")<<'\n';
        if(key)
        num--;
        s.erase(s.begin());
    }
    if(num==0) cout<<"All Prime!";
    return 0;
}