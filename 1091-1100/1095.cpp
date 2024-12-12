#include <bits/stdc++.h>
using namespace std;
struct node
{
    string t;
    int value;
};
bool cmp(const node &a, const node &b)
{
    return a.value == b.value ? a.t < b.t : a.value > b.value;
}
int main()
{
    int n, m, num;
    string s;
    cin >> n >> m;
    vector<node> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].t >> v[i].value;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> num >> s;
        printf("Case %d: %d %s\n", i, num, s.c_str());
        vector<node> ans;
        int cnt = 0, sum = 0;
        if (num == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j].t[0] == s[0])
                    ans.push_back(v[j]);
            }
        }
        else if (num == 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j].t.substr(1, 3) == s)
                {
                    cnt++;
                    sum += v[j].value;
                }
            }
            if (cnt != 0)
                printf("%d %d\n", cnt, sum);
        }
        else if (num == 3)
        {
            unordered_map<string, int> k;
            for (int j = 0; j < n; j++)
            {
                if (v[j].t.substr(4, 6) == s)
                    k[v[j].t.substr(1, 3)]++;
            }
            for (auto it : k)
            {
                ans.push_back({it.first, it.second});
            }
        }
        sort(ans.begin(), ans.end(), cmp);
        for (int j = 0; j < ans.size(); j++)
            printf("%s %d\n", ans[j].t.c_str(), ans[j].value);
        if (((num == 1 || num == 3) && ans.size() == 0) || (num == 2 && cnt == 0))
            printf("NA\n");
    }
    return 0;
}