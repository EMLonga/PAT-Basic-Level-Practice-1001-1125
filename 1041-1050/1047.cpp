#include<iostream>
#define MAXT 1000
using namespace std;
int main()
{
    int N;
    int team,m,s,maxg=0,maxi=0,g[MAXT]={0};
    cin>>N;
    for(int i=0;i<N;i++)
    {
        scanf("%d-%d %d",&team,&m,&s);
        g[team-1]+=s;
        if(g[team-1]>maxg)
        {
            maxg=g[team-1];
            maxi=team;
        }
    }
    cout<<maxi<<' '<<maxg<<endl;
    return 0;
}