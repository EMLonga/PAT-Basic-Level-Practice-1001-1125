#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, s;
    string str;
    map<string, int> maap;
    bool flag = false;
    cin >> m >> n >> s;
    for (int i = 1; i <= m; i++)
    {
        cin >> str;
        if (i == s)
        {
            if (maap.find(str) == maap.end())
            {
                maap[str] = 1;
                cout << str << '\n';
                flag = true;
                s += n;
            }
            else
            {
                s++;
            }
        }
    }
    if (!flag)
        cout << "Keep going..." << endl;
    return 0;
}
