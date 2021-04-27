/*
* Date:2021/03/20
* Name:李岱倫
* Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

double avg(int, int b = 5, int c = 7);
int main(void)
{
    cout << "avg(13) = " << avg(13) << endl;

    cout << "avg(9,16) = " << avg(9, 16) << endl;

    cout << "avg(8,17,3) = " << avg(8, 17, 3);

    system("pause");
    return 0;
}
double avg(int a, int b, int c)
{
    return double(a + b + c) / 3;
}