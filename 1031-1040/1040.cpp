#include <iostream>
using namespace std;
const int M = 1000000007;
int main()
{
    string a;
    cin >> a;
    int PAT[3] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        switch (a[i])
        {
        case 'P':
            if (++PAT[0] >= M)
                PAT[0] -= M;
            break;
        case 'A':
            if ((PAT[1] += PAT[0]) >= M)
                PAT[1] -= M;
            break;
        case 'T':
            if ((PAT[2] += PAT[1]) >= M)
                PAT[2] -= M;
            break;
        }
    }
    cout<<PAT[2];
    return 0;
}