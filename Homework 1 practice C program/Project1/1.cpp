/*
日期:2021/03/06
學號:1090604
姓名:李岱倫
*/
#include <iostream>
using namespace std;

void draw(int);
int i, n;
int  main(void)
{
    draw(n);

    system("pause");
    return 0;
}
void draw(int n)
{
    cout << "要幾層" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << i;
        }
        cout << endl;
    }
}