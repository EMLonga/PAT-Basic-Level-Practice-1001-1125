#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    getchar();
    for(int i=0;i<k;i++){
        int cnt=0;
        char c;

        int num=0,flag=0;
        while(1)
        {
            cin>>c;
            num=num*10+(int)(c-'0');
            cnt++;
            if(num%cnt!=0)
            flag=1;
            if(cin.peek()==' ' || cin.peek()=='\n')
            break;

        }
        if(!flag)
        cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}