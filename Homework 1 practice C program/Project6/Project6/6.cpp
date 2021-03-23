/*
日期:2021/03/06
學號:1090604
姓名:李岱倫
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct STUDENT
{
	char name[50];
	int math;
	int english;
};
void get_student_data(STUDENT* s)
{
	getchar();
	cout << "Eenter student's name : ";
	gets_s(s->name);
	cout << "Enter student's english : ";
	cin >> s->english;
	cout << "Enter student's math : ";
	cin >> s->math;
}
void output_student_data(STUDENT s)
{
	cout << s.name;
	cout << "\t" << s.english;
	cout << "\t" << s.math;
	cout << "\t" << "    " << (float)(s.english + s.math) / 2;
	cout << endl;
}
void main(void)
{
	cout << "Enter a choice :" << endl;
	cout << "0. Enter the student's name and grades" << endl;
	cout << "1. Print the all student's grades" << endl;
	cout << "2. Find the student who has highest grade(Total)" << endl;
	cout << "3. End Program" << endl;
	STUDENT A[10];
	int n, b, i = 0, max = 0, j;
	cout << "n = ";
	cin >> n;
	while (n != 4)
	{
		if (n == 0)
		{
			cout << "Enter the number of students : ";
			cin >> b;
			for (i = 0; i < b; i++)
			{
				get_student_data(&A[i]);
			}
		}
		else if (n == 1)
		{
			cout << "       Math   English     Average" << endl;
			for (i = 0; i < b; i++)
			{
				output_student_data(A[i]);
			}
		}
		else if (n == 2)
		{
			for (i = 0; i < b; i++)
			{
				if ((A[i].math + A[i].english) > max)
				{
					max = A[i].math + A[i].english;
					j = i;
				}
			}
			puts(A[j].name);
		}
		else
		{
			cout << "Bye Bye!";
			break;
		}
		cout << "n = ";
		cin >> n;
	}
	system("pause");
}