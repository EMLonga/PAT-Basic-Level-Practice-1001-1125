#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mint=1000,maxb=-1,flag=0,cen;
    cin>>n;
    vector<int> top(n);
    vector<int> bot(n);
    for(int i=0;i<n;i++)
    {
        cin>>top[i];
        if(top[i]<mint)
        {
            mint=top[i];
        }

    }
    for(int i=0;i<n;i++)
    {
        cin>>bot[i];
        if(bot[i]>maxb)
        {
            maxb=bot[i];
        }
    }
    cen=mint-maxb;
    if(cen>=1){
        cout<<"Yes "<<cen<<endl;
    }
    else
    cout<<"No "<<-cen+1<<endl;
    return 0;

}