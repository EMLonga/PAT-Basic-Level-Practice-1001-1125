#include<iostream>
#include<string>
using namespace std;
struct Person
{
    string name;
    string data;
}p[3];
int main()
{   
    int i,N,cnt=0;
    string maxd="2014/09/06";
    string mind="1814/09/06";
    p[0].data=maxd;
    p[1].data=mind;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>p[2].name>>p[2].data;
        if(maxd>=p[2].data && mind<=p[2].data)
        {
            cnt++;
            if(p[2].data<p[0].data)
            {
                p[0].data=p[2].data;
                p[0].name=p[2].name;
            }
            if(p[2].data>p[1].data)
            {
                p[1].data=p[2].data;
                p[1].name=p[2].name;
            }
        }
    }
    cout<<cnt;
    if(cnt)
    cout<<' '<<p[0].name<<' '<<p[1].name<<endl;
    return 0;
}