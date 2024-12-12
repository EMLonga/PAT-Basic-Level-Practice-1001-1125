#include<iostream>
using namespace std;
int main()
{
    int N,max=0,maxi=0;
    int i,temp;
    cin>>N;
    int s[N+1]={0};
    while(N--)
    {
        cin>>i>>temp;
        s[i]+=temp;
        if(s[i]>=max)
        {
            maxi=i;
            max=s[i];
        }
    }
    cout<<maxi<<' '<<max<<endl;
    return 0;
}