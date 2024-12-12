#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct MoonCake
{
    double inventory;
    double price;
    double unitprice;
};
typedef struct MoonCake MCake;
bool com(const MCake& a,const MCake& b)
{
    return a.price>b.price;
}
int main()
{
    int N,D;
    cin>>N>>D;
    vector<MCake> moonCake(N);
    for(int i=0;i<N;i++)
    {
        cin>>moonCake[i].inventory;
    }
    for(int i=0;i<N;i++)
    {
        cin>>moonCake[i].unitprice;
        moonCake[i].price=moonCake[i].unitprice/moonCake[i].inventory;
    }
    sort(moonCake.begin(),moonCake.end(),com);
    double totalIncome=0;
    for(const MoonCake& m:moonCake)
    {
        if(D>=m.inventory)
        {
            totalIncome+=m.unitprice;
            D-=m.inventory;
        }
        else
        {
            totalIncome+=m.price*D;
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<totalIncome<<endl;
}
