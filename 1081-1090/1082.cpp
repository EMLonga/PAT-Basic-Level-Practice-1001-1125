#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int maxScore = -1, minScore = 100000, temp, id, id1, id2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> id >> x >> y;
        temp = x * x + y * y;
        if (temp > maxScore)
        {
            id1 = id;
            maxScore = temp;
        }
        if (temp < minScore)
        {
            minScore = temp;
            id2 = id;
        }
    }
    printf("%04d %04d", id2, id1);
    return 0;
}