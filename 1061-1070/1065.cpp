#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, m;
    cin >> n;
    vector<int> couple(100000, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        couple[a] = b;
        couple[b] = a;
    }
    cin >> m;
    vector<int> guest(m), isExist(100000);
    for (int i = 0; i < m; i++)
    {
        cin >> guest[i];
        if (couple[guest[i]] != -1)
        {
            isExist[couple[guest[i]]] = 1;
        }
    }
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        if (!isExist[guest[i]])
        {
            s.insert(guest[i]);
        }
    }
    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (it != s.begin())
            cout << ' ';
        printf("%05d", *it);
    }
    return 0;
}