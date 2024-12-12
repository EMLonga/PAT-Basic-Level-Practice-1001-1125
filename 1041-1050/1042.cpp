#include <iostream>
using namespace std;
int solve(char c)
{
    int n = -1;
    if (c >= 'a' && c <= 'z')
    {
        n = c - 'a';
    }
    else if (c >= 'A' && c <= 'Z')
    {
        n = c - 'A';
    }
    return n;
}
int main()
{
    int pinlv[26] = {0};
    char c = ' ';
    int max = -1, maxi, i;
    while (c != '\n')
    {
        cin >> c;
        i = solve(c);
        if (i != -1)
        {
            pinlv[i]++;
        }
        c = cin.peek();
    }
    for (int i = 0; i < 26; i++)
    {
        if (pinlv[i] > max)
        {
            max = pinlv[i];
            maxi = i;
        }
    }
    cout << (char)('a' + maxi) << ' ' << max << endl;
    return 0;
}
