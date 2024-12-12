#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> score(m),correct(m);
    for(int i=0;i<m;i++)
    {
        cin>>score[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>correct[i];
    }
    for(int i=0;i<n;i++)
    {
        int num,sum=0;
        for(int j=0;j<m;j++)
        {
            cin>>num;
            if(num==correct[j])
            {
                sum+=score[j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}