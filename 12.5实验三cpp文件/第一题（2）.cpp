/*#include <iostream>
using namespace std;

int xlq(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int ydqt(int a, int b) {
    return a * b / xlq(a, b);
}

void calculateGCDAndLCM(int x, int y, int& gcd, int& lcm) {
   gcd = xlq(x, y);
   lcm = ydqt(x, y);
}

int main() 
{
    cout << "请输入两个数求他们的最大公约数与最小公倍数 ：";
        int num1, num2;
        cin >> num1 >> num2;
    int a, b;
    calculateGCDAndLCM(num1, num2,a, b);
    cout << "最大公因数为： " << a << endl;
   cout << "最小公倍数为： " << b << endl;
    return 0;
}
*/