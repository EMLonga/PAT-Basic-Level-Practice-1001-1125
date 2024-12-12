#include <bits/stdc++.h>
using namespace std;
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
vector<vector<int>> matrix;
int m, n,tol;
bool judge(int i, int j)
{
    for (int k = 0; k < 8; k++)
    {
        int tx = i + dir[k][0];
        int ty = j + dir[k][1];
        if (tx >= 0 && tx < n && ty>=0 && ty<m && matrix[i][j]-matrix[tx][ty]>=0-tol && matrix[i][j]-matrix[tx][ty]<=tol) return false;
    }
    return true;
}
int main()
{
    int x=0,y=0,cnt=0;
    cin >> m >> n >> tol;
    matrix.resize(n,vector<int>(m));
    map<int,int> mmap;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
            mmap[matrix[i][j]]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mmap[matrix[i][j]]==1 && judge(i,j))
            {
                cnt++;
                x=i+1;y=j+1;
            }
        }
    }
    if(cnt==1)
    {
        printf("(%d, %d): %d",y,x,matrix[x-1][y-1]);
    }
    else if(cnt==0)
    {
        printf("Not Exist");
    }
    else
    {
        printf("Not Unique");
    }
    return 0;
}