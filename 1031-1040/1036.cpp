#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    char c;
    cin>>n>>c;
    int row=int((double)n/2+0.5);
    int col=n;
    for(i=0;i<row;i++)
    {
        if(i==0 || i==row-1)
        {
            for(j=0;j<col;j++)
            {
                cout<<c;
            }
        }
        else
        {
            cout<<c;
            for(j=0;j<col-2;j++)
            {
                cout<<' ';
            }
            cout<<c;
        }
        cout<<endl;
    }
    return 0;

}