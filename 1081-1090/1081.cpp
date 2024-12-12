#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        if (s.length() >= 6)
        {
            int invalid = 0, hasAlpha = 0, hasnum = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] != '.' && !isalnum(s[j]))
                    invalid = 1;
                else if (isalpha(s[j]))
                    hasAlpha = 1;
                else if (isdigit(s[j]))
                    hasnum = 1;
            }
            if (invalid == 1)
                cout << "Your password is tai luan le." << endl;
            else if (hasnum == 0)
                cout << "Your password needs shu zi." << endl;
            else if (hasAlpha == 0)
                cout << "Your password needs zi mu." << endl;
            else
                cout << "Your password is wan mei." << endl;
        }
        else
        {
            cout << "Your password is tai duan le." << endl;
        }
    }
    return 0;
}