#include <iostream>
using namespace std;
void print(int C, int J, int B);
int main()
{
    int N;
    cin >> N;
    int C1 = 0, J1 = 0, B1 = 0, C2 = 0, J2 = 0, B2 = 0;
    int success1 = 0, lose1 = 0;
    for (int i = 0; i < N; i++)
    {
        char s, t;
        cin >> s >> t;
        if (s == 'J' && t == 'B' || s == 'B' && t == 'C' || s == 'C' && t == 'J')
        {
            success1++;
            switch (s)
            {
            case 'J':
                J1++;
                break;
            case 'B':
                B1++;
                break;
            case 'C':
                C1++;
                break;
            }
        }
        else if (s == 'B' && t == 'J' || s == 'C' && t == 'B' || s == 'J' && t == 'C')
        {
            lose1++;
            switch (t)
            {
            case 'J':
                J2++;
                break;
            case 'B':
                B2++;
                break;
            case 'C':
                C2++;
                break;
            }
        }
    }
    cout << success1 << ' ' << N - success1 - lose1 << ' ' << lose1 << endl;
    cout << lose1 << ' ' << N - success1 - lose1 << ' ' << success1 << endl;
    print(C1, J1, B1);
    cout << ' ';
    print(C2, J2, B2);
    return 0;
}
void print(int C, int J, int B)
{
    if (B >= C && B >= J)
        cout << 'B';
    else if (C >= J)
        cout << 'C';
    else
        cout << 'J';
}