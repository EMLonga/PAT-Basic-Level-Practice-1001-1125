#include<bits/stdc++.h>

using namespace std;
int main(){
	string a;
	int n=0;
	cin>>a;
	for(int i=0;i<a.size();i++){
		n+=a[i]-'0';
	} 
	vector<string> pinyin={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	vector<int> result;
	while(n){
		result.push_back(n%10);
		n/=10;
	}
	for(int i=result.size()-1;i>=0;i--){
		cout<<pinyin[result[i]];
		if(i!=0){
			cout<<' ';
		}
	}
	return 0;
} 