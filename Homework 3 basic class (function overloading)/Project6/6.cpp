/*
* Date:2021/03/20
* Name:李岱倫
* Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

double triangle(int base = 2, int height = 1);
int main(void)
{
    cout << "triangle() = " << triangle() << endl;

    cout << "triangle(10) = " << triangle(10) << endl;

    cout << "triangle(12,3) = " << triangle(12, 3) << endl;

    system("pause");
    return 0;
}
double triangle(int base, int height)
{
    return double(base * height) / 2;
}