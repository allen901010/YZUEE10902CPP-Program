/*
日期:2021/03/06
學號:1090604
姓名:李岱倫
*/
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

void draw(int n);
char l = 65;
char r = 65;

int main(void)
{
	int n;
	cout << "要幾層" << endl;
	cin >> n;

	draw(n);
	system("pause");
	return 0;
}
void draw(int n)
{
	int z = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (l > 90)
				l = 65;
			cout << char(l) << " ";
			l += 1;
		}
		cout << "\\" << " ";
		for (int k = 1; k <= z; k++)
		{
			if (r > 90)
				r = 65;
			cout << char(r) << " ";
			r += 1;
		}
		z -= 1;
		cout << endl;

		if (r > 90)
			r = 65;
	}
}