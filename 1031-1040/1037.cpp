#include<iostream>
using namespace std;
int main()
{
    int g1,s1,k1,g2,s2,k2,g,s,k;
    long long sum1,sum2,diff;
    scanf("%d.%d.%d",&g1,&s1,&k1);
    scanf("%d.%d.%d",&g2,&s2,&k2);
    sum1=g1*17*29+s1*29+k1;
    sum2=g2*17*29+s2*29+k2;
    diff=sum1-sum2;
    if(diff>0)
    {
        cout<<'-';
    }
    diff=abs(diff);
    k=diff%29;
    s=(diff/29)%17;
    g=diff/29/17;
    cout<<g<<'.'<<s<<'.'<<k<<endl;
    return 0;


}