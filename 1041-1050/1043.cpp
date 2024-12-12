#include<iostream>
using namespace std;
int main()
{
    string c;
    cin>>c;
    int a[6]={0};
    for(int i=0;i<c.size();i++)
    {
        switch(c[i])
        {
            case 'P':a[0]++;break;
            case 'A':a[1]++;break;
            case 'T':a[2]++;break;
            case 'e':a[3]++;break;
            case 's':a[4]++;break;
            case 't':a[5]++;break;
        }
    }
    while(a[0] || a[1] || a[2] || a[3] || a[4] ||a[5])
    {
        if(a[0])
        {
            cout<<'P';
            a[0]--;
        }
        if(a[1])
        {
            cout<<'A';
            a[1]--;
        }
        if(a[2])
        {
            cout<<'T';
            a[2]--;
        }
        if(a[3])
        {
            cout<<'e';
            a[3]--;
        }
        if(a[4])
        {
            cout<<'s';
            a[4]--;
        }
        if(a[5])
        {
            cout<<'t';
            a[5]--;
        }
    }
    return 0;
}