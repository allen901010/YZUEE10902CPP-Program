/*
* Date:2021/03/20
* Name:李岱倫
* Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

void proverb();
void proverb(int);

int main(void)
{
    cout << "calling proverb()" << endl;
    proverb();
    cout << "calling proverb(8)" << endl;
    proverb(8);

    system("pause");
    return 0;
}
void proverb()
{
    proverb(1);
    return;
}
void proverb(int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "Two heads are better than one." << endl;
    }
    return;
}