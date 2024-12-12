#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key = 1;
    set<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num, sum = 0;
        cin>>num;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }
        a.insert(sum);
    }
    cout << a.size() << endl;
    for (const auto &elem : a)
    {
        if (key)
        {
            key = 0;
            cout << elem;
        }
        else
        {
            cout << ' ' << elem;
        }
    }
    return 0;
}