#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int d = -1, h = -1, m = -1;
    string a1, a2, b1, b2;
    cin >> a1 >> a2;
    unsigned int i;
    for (i = 0; i < a1.size() && i < a2.size(); i++)
    {
        if (a1[i] == a2[i])
        {
            if (d == -1 && a1[i] >= 'A' && a1[i] <= 'G')
            {
                d = a1[i] - 'A';
            }
            else if (d != -1)
            {
                if (a1[i] >= '0' && a1[i] <= '9')
                {
                    h = a1[i] - '0';
                }
                else if (a1[i] >= 'A' && a1[i] <= 'N')
                {
                    h = a1[i] - 'A' + 10;
                }
                if (h>=0 && h<=23)
                {
                    break;
                }
            }
        }
    }
    cin >> b1 >> b2;
    for (i = 0; i < b1.size() && i < b2.size(); i++)
    {
        if (isalpha(b1[i]) && b1[i] == b2[i])
        {
            m = i;
        }
    }
    cout << day[d] << ' ';
    cout << setw(2) << setfill('0') << h << ":";
    cout << setw(2) << setfill('0') << m << endl;
    return 0;
}
