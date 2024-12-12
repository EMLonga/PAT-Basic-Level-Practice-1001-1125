#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    int next;
}T[100000];
vector<int> l1,l2,ans;
int sa,sb,n,a,ta,tb,c;
int main()
{
    cin>>sa>>sb>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>T[a].data>>T[a].next;
    }
    ta=sa;
    while(ta!=-1){
        l1.push_back(ta);
        ta=T[ta].next;
    }
    tb=sb;
    while(tb!=-1){
        l2.push_back(tb);
        tb=T[tb].next;
    }
    if(l1.size()<l2.size()) swap(l1,l2);
    for(int i=0,c=l2.size()-1;i<l1.size();i++){
        ans.push_back(l1[i]);
        if(i & 1 && c>=0) {
            ans.push_back(l2[c]);
            c--;
        }
    }
    for(int i=1;i<ans.size();i++){
        printf("%05d %d %05d\n",ans[i-1],T[ans[i-1]].data,ans[i]);
    }
    printf("%05d %d -1\n",ans.back(),T[ans.back()].data);
    return 0;
}