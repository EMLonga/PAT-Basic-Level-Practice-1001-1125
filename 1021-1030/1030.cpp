#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N, p;
    int ans, i, j;
    cin >> N >> p;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(begin(a), end(a));
    ans = 0;
    j=1;
    for (i = 0; i < N; i++)
    {
        while (j < N)
        {
            if ((double)a[j] <= (double)a[i] * p)
            {
                j++;
            }
            else
            {
                break;
            }
        }
        ans = ans > j - i ? ans : (j - i);
    }
    cout << ans;
    return 0;
}