#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int s1[6]={0};
    for(int i=0;i<a.size();i++)
    {
        switch(a[i]){
            case 'S':s1[0]++;break;
            case 't':s1[1]++;break;
            case 'r':s1[2]++;break;
            case 'i':s1[3]++;break;
            case 'n':s1[4]++;break;
            case 'g':s1[5]++;break;
        }
    }
    while(s1[0]+s1[1]+s1[2]+s1[3]+s1[4]+s1[5])
    {
        if(s1[0]>0) {cout<<"S";s1[0]--;}
        if(s1[1]>0) {cout<<'t';s1[1]--;}
        if(s1[2]>0) {cout<<'r';s1[2]--;}
        if(s1[3]>0) {cout<<'i';s1[3]--;}
        if(s1[4]>0) {cout<<'n';s1[4]--;}
        if(s1[5]>0) {cout<<'g';s1[5]--;}
    }
    return 0;

}