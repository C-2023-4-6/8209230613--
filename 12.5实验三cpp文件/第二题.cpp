/*#include <iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
	}
void print_num(int a)
{
	int count=0;
	int num = 2;
	int line = 10;
	while (count < a)
	{
		if (is_prime(num))
		{
			count++;

			if (count % line == 0)
			{
				cout <<'\t' << num << endl;
			}
			else
				cout << '\t' << num;
		}
		num++;
	}
}
int main()
{
	cout << "前200个素数为 ： " << endl;
	print_num(200);

	return 0;
}*/