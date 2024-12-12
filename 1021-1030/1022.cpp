#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    int D;
    int m[31];
    cin >> A >> B >> D;
    C = A + B;
    int i = 0;
    while (C)
    {
        m[i++] = C % D;
        C /= D;
    }
    if (!i)
    {
        cout << 0;
    }
    else
    {
        for (int j = i - 1; j >= 0; j--)
        {
            cout << m[j];
        }
    }
    return 0;
}