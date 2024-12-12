#include<iostream>
using namespace std;
int main()
{
    int M,N,i;
    cin>>N>>M;
    int a[N];
    M=M%N;
    for(i=M;i<N;i++) cin>>a[i];
    for(i=0;i<M;i++) cin>>a[i];
    cout<<a[0];
    for(i=1;i<N;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}