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
    cout << "�����������������ǵ����Լ������С������ ��";
        int num1, num2;
        cin >> num1 >> num2;
    int a, b;
    calculateGCDAndLCM(num1, num2,a, b);
    cout << "�������Ϊ�� " << a << endl;
   cout << "��С������Ϊ�� " << b << endl;
    return 0;
}
*/