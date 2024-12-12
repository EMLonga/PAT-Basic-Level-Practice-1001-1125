#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int num,flag=0;
        cin >> num;
        for (int j = 1; j <= 10; j++)
        {
            int sum = j * num * num;
            string s = to_string(sum);
            string s1 = to_string(num);
            string smult = s.substr(s.length() - s1.length());
            if (smult == s1)
            {
                printf("%d %d\n", j, sum);
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("No\n");
    }
    return 0;
}