/*
日期:2021/02/22
姓名:李岱倫
學號:1090604
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int m, n;
	char ch;
	cout << "Input m,n,ch:\n";
	cin >> m;
	cin >> n;
	cin >> ch;
	int a, c, d, i, j;
	char b;
	a = ch;
	for (i = 1; i <= n; i++)
	{
		cout << ch;
		ch++;
		if (ch > a + m - 1)
			ch = a;
	}
	cout << endl;
	b = (n - 1) * 4 % m + a - 1;
	for (i = 1; i <= n - 2; i++)
	{
		cout << b;
		for (j = 1; j <= n - 2; j++)
			cout << " ";
		cout << ch << endl;
		b--;
		ch++;
		if (b < a)
			b = a + m - 1;
		if (ch > a + m - 1)
			ch = a;
	}
	for (i = 1; i <= n; i++)
	{
		cout << b;
		b--;
		if (b < a)
			b = a + m - 1;
	}
	system("pause");
	return 0;
}