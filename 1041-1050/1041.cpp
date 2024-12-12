#include<iostream>
using namespace std;
#define MAXN 1000
typedef struct NNode
{
	string id;
	int seat;
}Node;
int main()
{
	int N,s1,s2;
	string ids;
	cin>>N;
	Node a[N+1];
	for(int i=0;i<N;i++)
	{
		cin>>ids>>s1>>s2;
		a[s1-1].id=ids;
		a[s1-1].seat=s2;
	} 
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>s1;
		cout<<a[s1-1].id<<' '<<a[s1-1].seat<<endl;
	}
	return 0;
}