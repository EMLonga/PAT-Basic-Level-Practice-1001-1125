#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<char,int> mp;
    mp['A']=1;
    mp['B']=2;
    mp['C']=3;
    mp['D']=4;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        char ropt,t1,t2;
        for(int j=0;j<4;j++)
        {
            scanf("%c-%c",&t1,&t2);
            getchar();
            if(t2=='T')
            {
                ropt=t1;
            }
        }
        cout<<mp[ropt];
    }
    return 0;
}