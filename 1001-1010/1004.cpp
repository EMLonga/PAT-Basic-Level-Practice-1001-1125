#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string maxname,maxid,minname,minid,name,id;
	int maxscore=-1,minscore=101,score;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>id>>score;
		if(score>maxscore){
			maxname=name;
			maxid=id;
			maxscore=score;
		}
		if(score<minscore){
			minname=name;
			minid=id;
			minscore=score;
		}
	}
	cout<<maxname<<' '<<maxid<<endl;
	cout<<minname<<' '<<minid<<endl;
	return 0;
}