#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string a[13]={"tret","jan", "feb", "mar", "apr", "may","jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string b[13]={"tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int N;
    cin>>N;
    cin.ignore();
    while(N--)
    {
        string c;
        getline(cin,c);
        if(isdigit(c[0]))
        {
            int sum=stoi(c);
            if(sum>=0 && sum<=12)
            {
                cout<<a[sum]<<endl;
            }
            else if(sum>=13 && sum%13==0)
            {
                cout<<b[sum/13]<<endl;
            }
            else if(sum>13 && sum%13!=0)
            {
                cout<<b[sum/13]<<' '<<a[sum%13]<<endl;
            }

        }
        else
        {
           istringstream ss(c);
           vector<string> s;
           string token;
           while(ss>>token)
           {
            s.push_back(token);
           }
           auto it=find(begin(b),end(b),s[0]);
           if(it!=end(b))
           {
                int s1=distance(begin(b),it);
                int s2=0;
                if(s.size()>1)
                {
                    it=find(begin(a),end(a),s[1]);
                    if(it!=end(a))
                    {
                        s2=distance(begin(a),it);
                    }
                }
                cout<<s1*13+s2<<endl;
           }
           else
           {
                it=find(begin(a),end(a),s[0]);
                if(it!=end(a))
                {
                    int s2=distance(begin(a),it);
                    cout<<s2<<endl;
                }
           }
        }
    }
}