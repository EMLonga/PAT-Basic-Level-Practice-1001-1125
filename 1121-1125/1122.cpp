#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num & 1)
        {
            if (mp.count(num) == 0)
                mp[num] = 1;
            else
                mp[num]++;
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second & 1)
        {
            cout << it->first <<endl;
            break;
        }
    }
    return 0;
}