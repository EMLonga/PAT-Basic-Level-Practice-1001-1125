#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,string> A={{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec","12"}};
    for(int i=0;i<n;i++){
        string M,D,Y,final,symmetry;
        cin>>M>>D>>Y;
        D.erase(D.end()-1);
        M=A[M];
        if(D.size()==1) D="0"+D;
        while(Y.size()<4) Y="0"+Y;
        final=Y+M+D;
        symmetry="Y";
        for(int i=0;i<4;i++){
            if(final[i]!=final[7-i]){
                symmetry="N";
                break;
            }
        }
        cout<<symmetry<<' '<<final<<'\n';
    }
    return 0;
}