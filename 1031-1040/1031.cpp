#include <iostream>
#include<string>
using namespace std;
int main()
{
    int N;
    int sum, ant, count = 0;
    int flag=0;
    int Z[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    string a;
    cin>>N;
    while (N--)
    {
        cin >> a;
        sum = 0;
        flag=0;
        for (int i = 0; i < a.length() - 1; i++)
        {
            if (isdigit(a[i]))
            {
                sum += (int)(a[i] - '0')*Z[i];
            }
            else
            {
                flag=1;
                break;
            }
        }
        ant = sum % 11;
        if (a[a.length() - 1] != M[ant] || flag)
        {
            count++;
            cout << a << endl;
        }
    }
    if (count == 0)
    {
        cout << "All passed" << endl;
    }
    return 0;
}