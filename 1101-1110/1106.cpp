#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[4]={2,0,1,9};
    cin>>n;
    for(int i=0;i<min(n,4);i++) cout<<a[i];
    for(int i=4;i<n;i++){
        int sum=(a[0]+a[1]+a[2]+a[3])%10;
        cout<<sum;
        a[0]=a[1];
        a[1]=a[2];
        a[2]=a[3];
        a[3]=sum;
    }
    return 0;
}