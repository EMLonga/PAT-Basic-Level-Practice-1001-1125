#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double max=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double a,b;
        cin>>a>>b;
        if(max<a*a+b*b)
        {
            max=a*a+b*b;
        }
    }
    printf("%.2f",sqrt(max));
    return 0;
}