#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max_num=-1,max_pay=-1;
    string max_num_id,max_numscore_id;
    int idn,idns;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        int num,pay;
        cin>>temp>>num>>pay;
        int sum=num*pay;
        if(pay>max_num)
        {
            max_num=pay;
            max_num_id=temp;
            idn=pay;
        }
        if(sum>max_pay)
        {
            max_pay=sum;
            max_numscore_id=temp;
            idns=sum;
        }
    }
    cout<<max_num_id<<' '<<idn<<endl;
    cout<<max_numscore_id<<' '<<idns<<endl;
    return 0;
}