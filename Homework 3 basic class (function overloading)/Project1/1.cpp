/*
* Date:2021/03/20
* Name:李岱倫
* Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

int main(void)
{
    float num, sum = 0, result = 0;
    int power;
    float n = 1;
    cout << "Enter number and power" << endl;
    cout << "num = ";
    cin >> num;
    cout << "power = ";
    cin >> power;
    int count = power;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result = pow(num, n);
        }
        n++;

        sum += result;
    }
    cout << "sum =" << sum;
    system("pause");
    return 0;
}