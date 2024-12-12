#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int next(int n);
int main()
{
    int n;
    cin >> n;
    n = next(n);
    while (n != 6174)
    {
        n = next(n);
    }
    return 0;
}
int next(int n)
{
    int d[4], min = 0, max = 0, i;
    i = 0;
    while (n)
    {
        d[i++] = n % 10;
        n /= 10;
    }
    while (i < 4)
    {
        d[i++] = 0;
    }
    sort(begin(d), end(d));
    for (i = 0; i < 4; i++)
    {
        min = min * 10 + d[i];
    }
    for (i = 3; i >= 0; i--)
    {
        max = max * 10 + d[i];
    }
    cout << setw(4) << setfill('0') << max;
    cout << " - " ;
    cout << setw(4) << setfill('0') << min;
    cout << " = ";
    cout << setw(4) << setfill('0') << max - min << endl;
    if (max == min)
    {
        return 6174;
    }
    return max - min;
}