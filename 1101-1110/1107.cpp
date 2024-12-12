#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> weight_Max;
    for(int i=0;i<n;i++){
        int maxm=-1,mouse;
        for(int j=0;j<m;j++){
            cin>>mouse;
            if(mouse>maxm) maxm=mouse;
        }
        weight_Max.push_back(maxm);
    }
    for(int i=0;i<n;i++){
        if(i) cout<<' ';
        cout<<weight_Max[i];
    }
    int maxm1=-1;
    for(int i=0;i<n;i++){
        if(maxm1<weight_Max[i])
        maxm1=weight_Max[i];
    }
    printf("\n%d",maxm1);
    return 0;
}