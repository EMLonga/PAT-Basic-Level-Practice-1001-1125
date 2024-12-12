#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, sum = 0;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i==j)
            continue;
            sum += a[i] * 10 + a[j];
        }
    }
    cout << sum;
    return 0;
}