#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    char m;
    int count=1;
    cin>>a;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        m=a[i];
        while(a[i+1]==m)
        {
            count++;
            i++;
        }
        cout<<m<<':'<<count<<endl;
        count=1;
    }
    return 0;
}