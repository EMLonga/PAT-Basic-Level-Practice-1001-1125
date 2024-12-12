#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int c,d;
    cin>>c>>d;
    a=to_string(c*d);
    reverse(a.begin(),a.end());
    printf("%d",stoi(a));
    return 0;
}