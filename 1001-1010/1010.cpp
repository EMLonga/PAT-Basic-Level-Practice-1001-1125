#include<iostream>
using namespace std;
int main()
{
    int N;
    char a=' ';
    int c,e,key=1;
    while(a!='\n')
    {
        cin>>c>>e;
        c=c*e;
        e--;
        if(e!=-1)
        {
            if(key)
            {
                cout<<c<<' '<<e;
                key=0;
            }
            else
            {
                cout<<' '<<c<<' '<<e;
            }
        }
        else
        {
            if(key)
            {
                cout<<0<<' '<<0;
            }
        }
        a=cin.peek();
    }
    return 0;
}