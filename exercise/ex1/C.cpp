#include <stdio.h>
#include <iostream>
using namespace std;
class MyNum{
public:
    char C;
    MyNum(char c='0'): C(c) {}
    MyNum operator*(MyNum p) {
        return '0' + (p.C - '0') * (C - '0');
    }
    operator int() {
        return C - '0';
    }
// 在此处补充你的代码
};

int main() { 
    char m,n;
    cin >> m >>  n;
    MyNum n1(m), n2(n);
    MyNum n3;
    n3 = n1*n2;
    cout << int(n3) << endl;
    return 0;
}