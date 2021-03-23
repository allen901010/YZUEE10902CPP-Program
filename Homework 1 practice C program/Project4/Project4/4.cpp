/*
日期:2021/03/06
學號:1090604
姓名:李岱倫
*/
#include<iostream>
#include<cstdlib>
using namespace std;
void main(void)
{
	int n, k = 1, i = 1;
	cout << "Enter an odd number=";
	cin >> n;
	while (n % 2 != 1)
	{
		cout << "Error!" << endl;
		cout << "Enter an odd number=";
		cin >> n;
	}
	cout << "Sum=1";
	while (i != n)
	{
		i = i + 2;
		k = k + i;
		cout << "+" << i;
	}
	cout << "=" << k << endl;
	system("pause");
}