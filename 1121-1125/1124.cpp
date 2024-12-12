#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long n,num=0;
    int i;
    cin>>n;
    vector<unsigned long> ss{1,2};
    for(i=2;num<=1e9 && n>num;i++){
        num=ss[i-1]+ss[i-2];
        ss.push_back(num);
    }
    i--;
    if(n==1 || n==2)
    cout<<n;
    else if((ss[i]-n)<(n-ss[i-1]))
	  cout<<ss[i];
	else 
	 cout<<ss[i-1];
	return 0; 
    
}