#include<iostream>
using namespace std;
int main()
{
    int grades[101]={0};
    int N;
    int number;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>number;
        grades[number]++;
    }
    int M;
    cin>>M;
    for(int i=0;i<M-1;i++)
    {
        cin>>number;
        cout<<grades[number]<<' ';
    }
    cin>>number;
    cout<<grades[number]<<endl;
    return 0;
}