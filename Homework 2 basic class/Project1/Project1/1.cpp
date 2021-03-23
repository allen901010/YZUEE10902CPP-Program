/*
Date:2021/03/14
Name:§õ©§­Û
Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

class Cwin
{
public:
	char id;
	int width;
	int height;
	string title;

	void set_title()
	{
		getline(cin, title);
	}
	void display()
	{
		cout << title << endl;
	}

	int area(void)
	{
		return width * height;
	}
};

int main(void)
{
	Cwin win1;
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	cout << "key in your title : " << endl;
	win1.set_title();
	win1.display();
	cout << "Window " << win1.id << ":" << endl;
	cout << "Area = " << win1.area() << endl;
	cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;

	system("pause");
	return 0;
}