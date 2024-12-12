#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    stack<string> stack;
    string s;
    char a='0';
    while(a!='\n')
    {
        cin>>s;
        a=cin.peek();
        stack.push(s);
    }
    cout<<stack.top();
    stack.pop();
    while(!stack.empty())
    {
        cout<<" "<<stack.top();
        stack.pop();
    }
    return 0;
}