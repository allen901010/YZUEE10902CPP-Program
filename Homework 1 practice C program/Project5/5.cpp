/*
 * Date:2021/03/06
 * Name:李岱倫
 * Student ID:1090604
*/

#include<iostream>
#include<cstdlib>
using namespace std;
bool is_prime(int n);
void print_prime(int n, int i, int k);
int  main(void)
{
    int n, i, k;
    cout << "Emter start numbers:";
    cin >> n;
    cout << "Emter end numbers:";
    cin >> i;
    cout << "Emter count numbers:";
    cin >> k;
    print_prime(n, i, k);
    system("pause");
    return 0;
}
void print_prime(int n, int i, int k)
{
    int l, x = 0;
    for (l = n; l <= i; l++)
    {
        if (is_prime(l) == true) {
            cout << l << " ";
            x++;
        }
        if (x == k) {
            x = 0;
            cout << endl;
        }
    }
}
bool is_prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}