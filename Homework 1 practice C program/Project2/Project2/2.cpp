/*
���:2021/03/06
�Ǹ�:1090604
�m�W:������
*/
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main(void)
{
	int a, b, c;
	float sum, ave = 0;
	int MAX, min;

	cout << "�п�J a , b , c" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	MAX = a;
	min = a;

	if (b > MAX)
		MAX = b;
	else if (c > MAX)
		MAX = c;

	if (b < min)
		min = b;
	else if (c < min)
		min = c;

	sum = a + b + c;
	ave = sum / 3;

	cout << "MAX = " << MAX << endl;
	cout << "min = " << min << endl;
	cout << "sum = " << sum << endl;
	cout << fixed << setprecision(3) << "average = " << ave << endl;

	system("pause");
	return 0;
}