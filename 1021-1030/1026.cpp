#include<iostream>
#define CLK_TCK 100
using namespace std;
int main()
{
    unsigned int c1,c2;
    cin>>c1>>c2;
    int hh,mm,ss;
    c1=(int)((double)(c2-c1)/CLK_TCK+0.5);
    hh=c1/3600;
    mm=(c1-hh*3600)/60;
    ss=c1%60;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}