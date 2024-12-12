#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    int i, j, count = 0;
    int max;
    cin >> N;
    long long a[N], ant[N], b[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + N);
    max = 0;
    for (i = 0; i < N; i++)
    {
        if (max < a[i])
            max = a[i];
        if (a[i] == b[i] && a[i] == max)
            ant[count++] = a[i];
    }
    cout << count << endl;
    if (count)
    {
        for (i = 0; i < count; i++)
        {
            if (i == 0)
                cout << ant[i];
            else
                cout << ' ' << ant[i];
        }
    }
    else
    {
        cout<<endl;
    }
    return 0;
}