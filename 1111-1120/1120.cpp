#include<bits/stdc++.h>
using namespace std;
int pre[10005],ans;
int main(){
    int n,m,a;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a;
        pre[i]=pre[i-1]+a;
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(pre[j]-pre[i-1]<=m) ans++;
            else break;
        }
    }
    cout<<ans;
    return 0;
}