#include <bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, k;
    cin >> n;
    vector<int> ids(n);
    vector<int> visited(n, 0);
    for (int i = 0; i < n; i++)
    {
        scanf("%4d", &ids[i]);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int id, idx;
        scanf("%4d", &id);
        auto it = find(ids.begin(), ids.end(), id);
        if (it != ids.end())
        {
            idx = distance(ids.begin(), it);
        }
        else
        {
            idx = -1;
        }
        if (idx == -1)
        {
            printf("%04d: Are you kidding?\n", id);
        }
        else if (!visited[idx])
        {
            if (idx == 0)
            {
                printf("%04d: Mystery Award\n", id);
            }
            else if (isprime(idx + 1))
            {
                printf("%04d: Minion\n", id);
            }
            else
            {
                printf("%04d: Chocolate\n", id);
            }
            visited[idx] = 1;
        }
        else
        {
            printf("%04d: Checked\n", id);
        }
    }
    return 0;
}