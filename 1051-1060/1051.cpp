#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double R1,P1,R2,P2,a1,b1,a2,b2;
    double Rnt,Pnt;
    cin>>R1>>P1>>R2>>P2;
    a1=R1*cos(P1);
    b1=R1*sin(P1);
    a2=R2*cos(P2);
    b2=R2*sin(P2);  
    Rnt=a1*a2-b1*b2;
    Pnt=a1*b2+a2*b1;
    if(Rnt<0 && Rnt>-0.01)
    Rnt=-Rnt;
    if(Pnt<0 && Pnt>-0.01)
    Pnt=-Pnt;
    if(Pnt>=0)
    {
        printf("%.2lf+%.2lfi",Rnt,Pnt);
    }
    else
    {
        printf("%.2lf%.2lfi",Rnt,Pnt);
    }
    return 0;
}