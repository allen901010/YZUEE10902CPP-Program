/*
* Date:2021/03/20
* Name:������
* Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

int main(void)
{
	float p, r, t;
	int n;

	cout << "�п�J���� = ";
	cin >> p;
	cout << "�п�J��Q�v = ";
	cin >> r;
	cout << "�п�J���� = ";
	cin >> n;
	int m = n;

	t = p * pow((r + 1), n);
	cout << "���Q�X�� " << t << endl;
	system("pause");
	return 0;
}