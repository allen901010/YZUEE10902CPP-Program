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
    float p, r, t;
    int n;

    cout << "請輸入本金 = ";
    cin >> p;
    cout << "請輸入月利率 = ";
    cin >> r;
    cout << "請輸入期數 = ";
    cin >> n;
    int m = n;

    t = p * pow((r + 1), n);
    cout << "本利和為 " << t << endl;
    system("pause");
    return 0;
}