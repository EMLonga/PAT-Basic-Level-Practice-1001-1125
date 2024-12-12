#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}
void solve(int a[], int N)
{
    int n = sqrt(N), t = 0;
    while (N % n != 0)
    {
        n--;
    }
    int m = N / n;
    sort(a, a + N, compare);
    vector<vector<int>> b(m, vector<int>(n));
    int level = m / 2 + m % 2;
    for (int i = 0; i < level; i++)
    {
        for (int j = i; j <= n - 1 - i && t <= N - 1; j++)
        {
            b[i][j] = a[t++];
        }
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++)
        {
            b[j][n - 1 - i] = a[t++];
        }
        for (int j = n - i - 1; j >= i && t <= N - 1; j--)
        {
            b[m - 1 - i][j] = a[t++];
        }
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--)
        {
            b[j][i] = a[t++];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",b[i][j]);
            if(j!=n-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    solve(a, N);
    return 0;
}