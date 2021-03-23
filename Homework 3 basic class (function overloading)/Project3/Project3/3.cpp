/*
* Date:2021/03/20
* Name:§õ©§­Û
* Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

int fact(int a);
int main(void)
{
	float sum = 0, result = 0;
	float x, k;

	cout << "Enter x and k" << endl;
	cout << "x = ";
	cin >> x;
	cout << "k = ";
	cin >> k;

	float m = 0, n = 0;
	for (int i = 0; i <= k; i++)
	{
		sum = sum + (pow(x, m) / fact(n));
		m++;
		n++;
	}
	cout << "(x^k)/k! = " << sum << endl;

	system("pause");
	return 0;
}

int fact(int a)
{
	if (a > 0)
		return(a * fact(a - 1));
	else
		return 1;
}