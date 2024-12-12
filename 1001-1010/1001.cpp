#include<iostream>
using namespace std;
int cal(int n);
int main()
{
    int n;
    cin >> n;
    cout<<cal(n);
}
int cal(int n)
{
    int count=0;
    while(n>1)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=(3*n+1)/2;
        }
        count++;
    }
    return count;
}