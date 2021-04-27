/*
 * Date:2021/03/14
 * Name:李岱倫
 * Student ID:1090604
*/

#include<cstdlib>
#include<iostream>

using namespace std;

class CTemp
{
public:

    double C;
    double F;
    float CtoF(double c)
    {
        return F = (C * 9 / 5) + 32;
    }
};

int main(void)
{
    CTemp temp1;
    cout << "Enter your temperature : ";
    cin >> temp1.C;
    cout << "C to F is " << temp1.CtoF(temp1.C) << endl;

    system("pause");
    return 0;
}