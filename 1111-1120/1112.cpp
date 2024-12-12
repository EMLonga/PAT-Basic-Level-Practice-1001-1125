#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,maxn=-10,flag=0,i;
    cin>>n>>t;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp>t)
        {
            printf("[%d,",i);
            int j=i;
            while(temp>t && j<n)
            {
                cin>>temp;
                j++;
            }
            printf(" %d]\n",j-1);
            i=j;
            flag=1;
        }
        else
        {
            if(maxn<temp)
            maxn=temp;
        }
    }
    if(!flag)
    cout<<maxn;
    return 0;
}