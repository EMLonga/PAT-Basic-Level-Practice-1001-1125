#include <iostream>
using namespace std;
int main()
{
    int n;
    char a;
    cin >> n >> a;
    int num = 1, i = 0, num_of_pile=0, b[1001]={0}, j, len = 0;
    n -= num;
    b[0] = num;
    len++;
    while (n>=0)
    {
        i++;
        num = num + 2;
        b[i] = num;
        len++;
        n -= 2 * num;
    }
    n+=2*num;
    num_of_pile = i;
    for (i = 1; i <= num_of_pile; i++)
    {
        for (j = 1; j <i; j++)
        {
            cout << ' ';
        }
        for (j = 1; j <= b[len-i-1];j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
    for(i=1;i<num_of_pile;i++)
    {
        for(j=1;j<num_of_pile-i;j++)
        {
            cout<<' ';
        }
        for(j=1;j<=b[i];j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
    cout<<n;
    return 0;
}