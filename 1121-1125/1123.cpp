#include <bits/stdc++.h>
using namespace std;

void roundup(string &s, int n, int c) {     	
	// 处理进位和精度， n为有效位最后一位的下标，c为进位标志，初值表示有效位最后一位是否进位
    int d = n;	
    while (d >= 0) {
        if (s[d] == '.') {
            --d;
            continue;
        }
        s[d] += c;
        if (s[d] > '9') 							
        	// 这里c为1是隐含条件，只有c为1才能进位
            s[d] -= 10;
        else {
        	// 不能进位就直接退出函数
            s = s.substr(0, n + 1);					
            return;
        }  
        --d;
    }
    // 循环执行完毕时最高位进位，因此要在浮点数左侧填充1
    s = s.substr(0, n + 1);
    s = "1" + s;
}

bool isZero(string s) {							
	// 判断结果是否为0
    for (int i = 0; i < s.size(); i++) 
        if (s[i] != '.' && s[i] != '0')
            return false;
    return true;
}

int main() {
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        int signal, point = 0, len;
        bool symbol = true;						// symbol为符号位的标志，true为正，false为负
        string Float;
        cin >> signal >> Float;
        if (Float[0] == '-') {					// 输入为负值时取后面的正值计算
            symbol = false;
            Float = Float.substr(1);
        }
        while (point < Float.size() && Float[point] != '.') 
        	++point; 							// point总是小数点的下标，即使小数点不存在
        len = point + d + 1;					// len为舍入后浮点数的长度（不考虑最高位进位）
        if (Float.size() <= len) {
            if (point == Float.size())
                Float += '.';					// 输入为整数时填充小数点
            if (!symbol) cout << '-';
            cout.width(point + d + 1);
            cout.setf(ios::left);
            cout.fill('0');
            cout << Float << endl;				// 左对齐填充0
            continue;
        }
        if (signal == 1) 
            roundup(Float, point + d, Float[point + d + 1] >= '5');
        else if (signal == 2) 
            roundup(Float, point + d, 0);
        else if (Float[point + d + 1] == '5') {
            bool flag = false;					// flag标志5后面是否还有非零尾数
            for (int j = point + d + 2; j < Float.size(); j++)
                if (Float[j] != '0') {
                    flag = true;
                    break;
                }
            if (flag) 
                roundup(Float, point + d, 1);
            else 
                roundup(Float, point + d, Float[point + d] % 2);
        }
        else 
        	roundup(Float, point + d, Float[point + d + 1] > '5');
        if (!symbol && !isZero(Float)) 
        	cout << '-';
        cout << Float << endl;
    }
    return 0;
}
