#include <iostream>
using namespace std;
int main()
{
    int N, i;
    long long a, b, c;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        cin >> a >> b >> c;
        cout << "Case #" << i << ": ";
        if (a + b > c)
        {
            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }
    }
    return 0;
}
