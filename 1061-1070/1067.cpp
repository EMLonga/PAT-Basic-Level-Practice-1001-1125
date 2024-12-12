#include <bits/stdc++.h>
using namespace std;
int main()
{
    string correct, temp;
    int n, cnt = 0, key = 1;
    cin >> correct >> n;
    getchar();
    while(1)
    {
        getline(cin,temp);
        if(temp=="#") break;
        if (!key)
            continue;
        if (temp != correct)
        {
            cnt++;
            if (cnt == n)
            {
                cout << "Wrong password: " << temp << endl;
                cout << "Account locked" << endl;
                key = 0;
            }
            else
            {
                cout << "Wrong password: " << temp << endl;
            }
        }
        else
        {
            cout << "Welcome in" << endl;
            key = 0;
        }
    }
}