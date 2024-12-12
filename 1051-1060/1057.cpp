#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int ant = 0, count1 = 0, count2 = 0;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        if (tolower(a[i]) >= 'a' && tolower(a[i]) <= 'z')
        {
            ant += (int)(tolower(a[i]) - 'a' + 1);
        }
    }
    while (ant)
    {
        if (ant & 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        ant >>= 1;
    }

    cout << count2 << ' ' << count1 << endl;

    return 0;
}