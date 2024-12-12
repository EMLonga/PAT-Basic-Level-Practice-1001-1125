#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, sum = 0, cnt, i, j;
    cin >> N;
    vector<int> race(N);
    for (i = 0; i < N; i++)
    {
        cin >> race[i];
    }
    for (i = N; i > 0; i--)
    {
        cnt = 0;
        for (j = 0; j < N; j++)
        {
            if (race[j] > i)
                cnt++;
        }
        if (cnt >= i)
            break;
    }
    cout << i;
    return 0;
}