#include <iostream>
#include<cmath>
using namespace std;
long long gcd(long long t1, long long t2)
{
    long long temp;
    if (t2 > t1)
    {
        temp = t1;
        t1 = t2;
        t2 = temp;
    }
    while (t2)
    {
        temp = t1 % t2;
        t1 = t2;
        t2 = temp;
    }
    return t1;
}
void func(long long m, long long n)
{
    if (m * n == 0)
    {
        printf("%s", n == 0 ? "Inf" : "0");
        return;
    }
    bool flag = ((m < 0 && n > 0) || (m > 0) && n < 0);
    m = abs(m);
    n = abs(n);
    long long x = m / n;
    printf("%s", flag ? "(-" :"");
    if (x != 0)
        printf("%lld", x);
    if (m % n == 0)
    {
        if (flag)
            printf(")");
        return;
    }
    if (x != 0)
        printf(" ");
    m = m - x * n;
    long long t = gcd(m, n);
    m = m / t;
    n = n / t;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}

int main()
{
    long long a, b, c, d;
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b);
    cout << " + ";
    func(c, d);
    cout << " = ";
    func(a * d + b * c, b * d);
    cout << endl;
    func(a, b);
    cout << " - ";
    func(c, d);
    cout << " = ";
    func(a * d - b * c, b * d);
    cout << endl;
    func(a, b);
    cout << " * ";
    func(c, d);
    cout << " = ";
    func(a * c, b * d);
    cout << endl;
    func(a, b);
    cout << " / ";
    func(c, d);
    cout << " = ";
    func(a * d, b * c);
    cout << endl;
    return 0;
}