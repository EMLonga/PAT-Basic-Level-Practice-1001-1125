#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,a,b,c;
    cin>>m>>n>>a>>b>>c;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]>=a && matrix[i][j]<=b)
            {
                matrix[i][j]=c;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j!=0)
            cout<<' ';
            printf("%03d",matrix[i][j]);
        }
        cout<<endl;
    }
    return 0;

}