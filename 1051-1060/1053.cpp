#include <iostream>
using namespace std;
int main()
{
    int N, D;
    double e;
    int cnt1 = 0, cnt2 = 0;
    cin >> N >> e >> D;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        int count = 0;
        double ei;
        for (int j = 0; j < num; j++)
        {
            cin >> ei;
            if (ei < e)
            {
                count++;
            }
        }
        if ((double)count/num>0.5)
        {
            cnt1++;
            if (num > D)
            {
                cnt2++;
                cnt1--;
            }
        }
    }
    printf("%.1f%% %.1f%%", (double)cnt1 / N * 100, (double)cnt2 / N * 100);
    return 0;
}