#include<iostream>
using namespace std;
int main()
{
    long A,B;
    int DA,DB;
    int PA=0,PB=0,count=0,temp;
    cin>>A>>DA;
    cin>>B>>DB;
    while(A)
    {
        temp=A%10;
        A/=10;
        if(temp==DA)
        {
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        PA=PA*10+DA;
    }
    count=0;
    while(B)
    {
        temp=B%10;
        B/=10;
        if(temp==DB)
        {
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        PB=PB*10+DB;
    }
    cout<<PA+PB<<endl;
    return 0;
    
    
}