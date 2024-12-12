#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> ant;
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        int num=i/2+i/3+i/5;
        ant.emplace(num);
    }
    cout<<ant.size()<<endl;
    return 0;
}