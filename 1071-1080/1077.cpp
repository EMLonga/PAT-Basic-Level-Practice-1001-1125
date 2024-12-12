#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int tea, maxa, mina;
    double tol;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> tea;
        int temp, sum = 0, cnt = 0;
        maxa = -1;
        mina = m + 10;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> temp;
            if (temp >= 0 && temp <= m)
            {
                cnt++;
                sum += temp;
                if (temp > maxa)
                {
                    maxa = temp;
                }
                if (temp < mina)
                {
                    mina = temp;
                }
            }
        }
        tol = ((double)(sum - mina - maxa) / (cnt - 2) + tea) * 0.5;
        printf("%d\n", (int)(tol + 0.5));
    }
    return 0;
}