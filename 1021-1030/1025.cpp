#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node
{
    int addr;
    int next;
    int value;
};
typedef struct Node NODE;
int main()
{
    int head,N,K,len=0;
    NODE temp[100010];
    int addr;
    cin>>head>>N>>K;
    vector<NODE> list;
    for(int i=0;i<N;i++)
    {
        cin>>addr;
        temp[addr].addr=addr;
        cin>>temp[addr].value>>temp[addr].next;
    }
    addr=head;
    while(addr!=-1)
    {
        list.push_back(temp[addr]);
        len++;
        addr=temp[addr].next;
    }
    for(int i=0;i+K<=len;i+=K)
    {
        reverse(list.begin()+i,list.begin()+i+K);
    }
    for(int i=0;i<len-1;i++)
    {
        printf("%05d %d %05d\n",list[i].addr,list[i].value,list[i+1].addr);
    }
    printf("%05d %d %d\n",list[len-1].addr,list[len-1].value,-1);
    return 0;
}