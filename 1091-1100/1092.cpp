#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, maxn = -1;
    cin >> n >> m;
    vector<int> ans;
    vector<int> score(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int temp;
        for (int j = 1; j <= n; j++)
        {
            cin >> temp;
            score[j] += temp;
            maxn = max(maxn, score[j]);
        }
    }
    cout << maxn << endl;
    for (int i = 1; i < n + 1; i++)
    {
        if (score[i] == maxn)
            ans.push_back(i);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (i != 0)
            cout << " ";
        cout << ans[i];
    }
    return 0;
}