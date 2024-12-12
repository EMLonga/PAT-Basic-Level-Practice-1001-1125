#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data, next;
}A[100000];
int address, n, k, t1, t, c, cnt;
int main()
{
    vector<int> L, ans, E[100001];
    cin >> address >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t1;
        cin >> A[t1].data >> A[t1].next;
    }
    t = address;
    while (t != -1)
    {
        L.push_back(t);
        t = A[t].next;
    }
    n = L.size();
    for (int i = 0; i < n; i++)
    {
        E[c].push_back(L[i]);
        cnt++;
        if (cnt == k && i != n - 1)
        {
            cnt = 0;
            c++;
        }
    }
    for (int i = c; i >= 0; i--)
        for (auto it : E[i])
            ans.push_back(it);
    for (int i = 1; i < n; i++)
        printf("%05d %d %05d\n", ans[i - 1], A[ans[i - 1]].data, ans[i]);
    printf("%05d %d -1", ans.back(), A[ans.back()].data);
    return 0;
}