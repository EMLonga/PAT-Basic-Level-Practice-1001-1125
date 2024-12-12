#include <iostream>
#include<cmath>
#define MAXN 62
using namespace std;
int hash_(char c)
{
    int ret;
    if (c >= '0' && c <= '9')
    {
        ret = c - '0';
    }
    else if (c >= 'a' && c <= 'z')
    {
        ret = c - 'a' + 10;
    }
    else
    {
        ret = c - 'A' + 36;
    }
    return ret;
}
int main()
{
    int i,flag=1,sum1=0,sum2=0;
    int head[MAXN]={0};
    string a, b;
    cin >> a >> b;
    for (i = 0; i < a.size(); i++)
    {
        int hash1=hash_(a[i]);
        head[hash1]++;
    }
    for (i = 0; i < b.size(); i++)
    {
        int hash2=hash_(b[i]);
        head[hash2]--;
    }
    for(i=0;i<MAXN;i++)
    {
        if(head[i]<0)
        {
            flag=0;
            sum2+=abs(head[i]);
        }
        else
        {
            sum1+=head[i];
        }
    }
    if(flag)
    {
        cout<<"Yes "<<sum1<<endl;
    }
    else
    {
        cout<<"No "<<sum2<<endl;
    }
    return 0;
}