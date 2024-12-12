#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct Node NNode;
struct Node
{
    string id;
    int v, t, s;
};
bool cmp(NNode &a, NNode &b)
{
    if (a.s != b.s)
        return a.s > b.s;
    else if (a.v != b.v)
        return a.v > b.v;
    else
        return a.id < b.id;
}
int main()
{
    int N, L, H;
    int i, j;
    int count = 0;
    vector<NNode> First;
    vector<NNode> Second;
    vector<NNode> Third;
    vector<NNode> Four;
    cin >> N >> L >> H;
    vector<NNode> students;
    for (i = 0; i < N; i++)
    {
        NNode stu;
        cin >> stu.id >> stu.v >> stu.t;
        if (stu.v >= L && stu.t >= L)
        {
            stu.s = stu.v + stu.t;
            count++;
            if (stu.v >= H && stu.t >= H)
            {
                First.push_back(stu);
            }
            else if (stu.v >= H && stu.t < H)
            {
                Second.push_back(stu);
            }
            else
            {
                if (stu.v >= stu.t)
                {
                    Third.push_back(stu);
                }
                else
                {
                    Four.push_back(stu);
                }
            }
        }
    }
    cout << count << endl;
    sort(First.begin(), First.end(), cmp);
    sort(Second.begin(), Second.end(), cmp);
    sort(Third.begin(), Third.end(), cmp);
    sort(Four.begin(), Four.end(), cmp);
    for (const NNode &stu : First)
    {
        cout << stu.id << ' ' << stu.v << ' ' << stu.t << endl;
    }
    for (const NNode &stu : Second)
    {
        cout << stu.id << ' ' << stu.v << ' ' << stu.t << endl;
    }
    for (const NNode &stu : Third)
    {
        cout << stu.id << ' ' << stu.v << ' ' << stu.t << endl;
    }
    for (const NNode &stu : Four)
    {
        cout << stu.id << ' ' << stu.v << ' ' << stu.t << endl;
    }
    return 0;
}
