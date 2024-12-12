#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double sum = (double)a[0];
    for (int i = 1; i < n; i++)
    {
        sum = (sum + a[i]) / 2.0;
    }
    printf("%d", (int)(sum * 10) / 10);
    return 0;
}