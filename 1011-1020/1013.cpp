#include <iostream>
using namespace std;
int main()
{
    int M, N;
    cin >> M >> N;
    int count = 0;
    int j = 2, key;
    int temp=0;
    for (int i = 2; count <= N; i++)
    {
        key = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                key = 0;
                break;
            }
        }
        if (key)
        {
            count++;
            if (count >= M && count <= N)
            {
                temp++;
                if((temp%10)==0)
                {
                    cout<<" "<<i<<endl;
                }
                else if(temp%10==1)
                {
                    cout<<i;
                }
                else
                {
                    cout<<" "<<i;
                }
            }
        }
    }
    return 0;
}