#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    int next;
};
int main()
{
    int start, n, k, temp;
    node list[100000];
    vector<int> v[3];
    cin >> start >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        scanf("%d%d", &list[temp].data, &list[temp].next);
    }
    int p = start;
    while (p != -1)
    {
        int data = list[p].data;
        if (data < 0)
        {
            v[0].push_back(p);
        }
        else if (data >= 0 && data <= k)
        {
            v[1].push_back(p);
        }
        else
        {
            v[2].push_back(p);
        }
        p = list[p].next;
    }
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (!flag)
            {
                printf("%05d %d ", v[i][j], list[v[i][j]].data);
                flag = 1;
            }
            else
            {
                printf("%05d\n%05d %d ", v[i][j], v[i][j], list[v[i][j]].data);
            }
        }
    }
    printf("-1");
    return 0;
}