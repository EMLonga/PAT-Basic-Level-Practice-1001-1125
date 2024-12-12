#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
struct node{
    int n,num;
    friend bool operator < (node &a,node &b){
        if(a.n!=b.n) return a.n<b.n;
        return a.num<b.num;
    }
}T;
int n,k,m,temp,sum,sum2,I,II;
vector<node> A;
bool isprime(int x)
{
    if(x<=2) return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        A.clear();
        cout<<"Case "<<i<<'\n';
        cin>>k>>m;
        if(k*9<m) cout<<"No Solution\n";
        else{
            temp=pow(10,k-2);
            for(int i=temp/10;i<temp;i++){
                sum=18,sum2=0,I=i,II=i+1;
                while(I){
                    sum+=I%10;
                    I/=10;
                    if(sum>m) break;
                }
                while(II){
                    sum2+=II%10;
                    II/=10;
                }
                if(sum==m && isprime(__gcd(m,sum2))){
                    T.n=sum2,T.num=i;
                    A.push_back(T);
                }
            }
            sort(A.begin(),A.end());
            if(A.empty()) cout<<"No Solution\n";
            for(auto &it:A){
                cout<<it.n<<' '<<it.num<<"99\n";
            }
        }
    }
    return 0;
}