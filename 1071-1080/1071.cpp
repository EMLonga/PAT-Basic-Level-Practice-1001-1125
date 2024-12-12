#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k, n1, b, temp, n2, flag = 1;
    cin >> t >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n1 >> b >> temp >> n2;
        if (!flag)
            continue;
        if (temp > t)
        {
            printf("Not enough tokens.  Total = %d.\n", t);
            continue;
        }
        if (b)
        {
            if (n1 < n2)
            {
                t += temp;
                printf("Win %d!  Total = %d.\n", temp, t);
            }
            else
            {
                t -= temp;
                printf("Lose %d.  Total = %d.\n", temp, t);
            }
        }
        else
        {
            if (n1 > n2)
            {
                t += temp;
                printf("Win %d!  Total = %d.\n", temp, t);
            }
            else
            {
                t -= temp;
                printf("Lose %d.  Total = %d.\n", temp, t);
            }
        }
        if (!t)
        {
            printf("Game Over.\n");
            flag = 0;
        }
    }
    return 0;
}