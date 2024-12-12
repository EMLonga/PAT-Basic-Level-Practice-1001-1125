#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int left=0,Right=0;
    if(s.size() & 1) printf("Error: %d digit(s)",s.size());
    else{
        for(int i=0;i<s.size();i++){
            if(i<s.size()/2) left+=s[i];
            else Right+=s[i];
        }
        if(left==Right-2) cout<<"Yes: "<<s.substr(s.size()/2)<<" - "<<s.substr(0,s.size()/2)<<" = 2";
        else cout<<"No: "<<s.substr(s.size()/2)<<" - "<<s.substr(0,s.size()/2)<<" != 2";

    }
    return 0;
}