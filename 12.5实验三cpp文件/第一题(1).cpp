/*#include <iostream>
using namespace std;
int xlq(int a, int b)
{
		int temp, c;
		
		if (a < b) {
			temp = a;
			a = b;
			b = temp;
			
		} 
		while (b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		return a;
}
int main()
{
	int a, b;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	int temp = xlq (a, b);
	
	cout << "这两个数的最大公约数为：" <<  temp<< endl;
}*/