#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,cnt=1,sum[100]={0},A[100][100];
    cin>>n>>k>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
            if(i&1) sum[j]+=A[i][j];
        }
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<cnt;j++) sum[j]+=x;
        for(int j=cnt;j<n;j++) sum[j]+=A[i][j-cnt];
        cnt=cnt%k+1;
    }
    for(int i=0;i<n;i++)
    {
        if(i) cout<<' ';
        cout<<sum[i];
    }
    return 0;
}