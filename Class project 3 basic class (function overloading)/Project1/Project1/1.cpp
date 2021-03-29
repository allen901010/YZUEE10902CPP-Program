/*
Date:2021/03/15
Name:李岱倫
Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

class MATH
{
public:
	int M = 0;
	int max(int a, int b);
	int	max(int a, int b, int c);
	int power(int a = 1, int b = 1);
};

int MATH::max(int a, int b)
{
	M = a;
	if (b > M)
		M = b;
	return M;
}
int MATH::max(int a, int b, int c)
{
	M = a;
	if (b > M)
		M = b;
	if (c > M)
		M = c;

	return M;
}
int MATH::power(int a, int b)
{
	int sum = 1;
	for (int i = 1; i <= b; i++)
	{
		sum *= a;
	}
	return sum;
}

int main(void)
{
	MATH a;
	cout << "max(8,2) = " << a.max(8, 2) << endl;
	cout << "max(1,5,9) = " << a.max(1, 5, 9) << endl;
	cout << "power() = " << a.power() << endl;
	cout << "power(5) = " << a.power(5) << endl;
	cout << "power(3,2) = " << a.power(3, 2) << endl;
	system("pause");
	return 0;
}