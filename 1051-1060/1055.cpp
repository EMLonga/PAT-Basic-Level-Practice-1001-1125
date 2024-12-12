#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Node
{
    string id;
    int high;
};
int compare(const struct Node a, const struct Node b)
{
    return a.high != b.high ? a.high > b.high : a.id < b.id;
}
int main()
{
    int n, k,m;
    cin >> n >> k;
    vector<Node> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id >> s[i].high;
    }
    sort(s.begin(), s.end(), compare);
    int t = 0, row = k;
    while (row)
    {
        if (row == k)
        {
            m = n - n / k * (k - 1);
        }
        else
        {
            m = n / k;
        }
        vector<string> ans(m);
        ans[m/2]=s[t].id;
        int j=m/2-1;
        for(int i=t+1;i<t+m;i=i+2)
        {
            ans[j--]=s[i].id;
        }
        j=m/2+1;
        for(int i=t+2;i<t+m;i=i+2)
        {
            ans[j++]=s[i].id;
        }
        cout<<ans[0];
        for(int i=1;i<m;i++)
        {
            cout<<' '<<ans[i];
        }
        cout<<endl;
        t=t+m;
        row--;
    }
    return 0;
}
