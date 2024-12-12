#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[10], i, cnt = 0;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
        cnt += a[i];
    }
    i = 1;
    while (1)
    {

        if (a[i])
        {
            cout << i;
            cnt--;
            a[i]--;
            break;
        }
        else
            i++;
    }
    i = 0;
    while (cnt)
    {
        if (a[i])
        {
            while (a[i])
            {
                cout << i;
                cnt--;
                a[i]--;
            }
            i++;
        }
        else
            i++;
    }

    return 0;
}