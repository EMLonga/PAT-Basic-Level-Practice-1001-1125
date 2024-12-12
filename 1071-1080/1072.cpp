#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, temp,num;
    int cnt1 = 0, cnt2 = 0;
    char stu[10];
    int forbid[10000] = {0};
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        forbid[temp] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d",stu,&num);
        bool flag = false;
        for (int j = 0; j < num; j++)
        {
            cin >> temp;
            if (forbid[temp])
            {
                cnt2++;
                if (!flag)
                {
                    printf("%s: %04d", stu, temp);
                    cnt1++;
                    flag = true;
                }
                else
                {
                    printf(" %04d", temp);
                }
            }
        }
        if (flag)
        {
            cout << '\n';
        }
    }
    cout << cnt1 << ' ' << cnt2 << endl;
    return 0;
}