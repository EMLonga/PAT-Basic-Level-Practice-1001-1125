#include <iostream>
using namespace std;
int main()
{
    int a1 = 0, a2 = 0, a3 = 0, a5 = 0,a4=0;
    int num, remainder;
    int sigh = 1;
    int count = 0,count1=0;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        remainder = num % 5;
        switch (remainder)
        {
        case 0:
            if (num % 2 == 0)
            {
                a1 += num;
            }
            break;
        case 1:
            count1++;
            a2 += num * sigh;
            sigh *= -1;
            break;
        case 2:
            a3++;
            break;
        case 3:
            a4 += num;
            count++;
            break;
        case 4:
            if (num > a5)
                a5 = num;
            break;
        default:
            break;
        }
    }
    if (a1)
    {
        cout << a1;
    }
    else
    {
        cout << 'N';
    }
    if (count1)
    {
        cout << ' ' << a2;
    }
    else
    {
        cout << " N";
    }
    if (a3)
    {
        cout << ' ' << a3;
    }
    else
    {
        cout << " N";
    }
    if (count)
    {
        printf(" %.1f", (double)a4/(double)count);
    }
    else
    {
        cout << " N";
    }
    if (a5)
    {
        cout << ' ' << a5;
    }
    else
    {
        cout << " N";
    }
    return 0;
}
