#include<iostream>
using namespace std;

bool isAnswerCorrect(const std::string& s) {
    int countP = 0, countA = 0, countT = 0;
    int indexP = -1, indexT = -1;

    // 遍历字符串，统计 P、A、T 的数量和位置
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'P') {
            countP++;
            indexP = i;
        } else if (s[i] == 'A') {
            countA++;
        } else if (s[i] == 'T') {
            countT++;
            indexT = i;
        } else {
            // 字符串中不应包含其它字符
            return false;
        }
    }

    // 满足条件2和条件3
    if (countP == 1 && countT == 1 && countA > 0 && (indexT - indexP) > 1 && 
        (indexP * (indexT - indexP - 1)) == (s.length() - indexT - 1)) {
        return true;
    }

    return false;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(isAnswerCorrect(s))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}