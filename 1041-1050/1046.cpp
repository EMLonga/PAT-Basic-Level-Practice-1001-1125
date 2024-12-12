#include<iostream>
using namespace std;
int main()
{
    int N;
    int num1,num2,cnt1=0,cnt2=0,sum1,sum2;
    cin>>N;
    while(N--)
    {
        cin>>num1>>sum1>>num2>>sum2;
        if(sum1==num1+num2 && sum2!=num1+num2)
        {
            cnt1++;
        }
        if(sum1!=num1+num2 && sum2==num1+num2)
        {
            cnt2++;
        }
    }
    cout<<cnt2<<' '<<cnt1<<endl;
    return 0;
}