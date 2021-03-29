/*
 * Date:2021/03/22
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void sort(int &x, int &y);

void sort(int &x, int &y, int &z);

int main(void) {

    int a, b, c;
    int &x = a, &y = b, &z = c;

    a = 10;
    b = 80;
    sort(x, y);
    cout << a << "," << b << endl;

    a = 88;
    b = 8;
    sort(x, y);
    cout << a << "," << b << endl;

    a = 20;
    b = 2;
    c = 9;
    sort(x, y, z);
    cout << a << "," << b << "," << c << endl;

    a = 10;
    b = 200;
    c = 900;
    sort(x, y, z);
    cout << a << "," << b << "," << c << endl;

    system("pause");
    return 0;


}

void sort(int &x, int &y) {

    int temp = x;
    if (y > x) {
        x = y;
        y = temp;
    }
}

void sort(int &x, int &y, int &z) {

    int temp;

    if (x > y && x > z) {
        sort(y, z);
    } else if (y > z && y > x) {
        temp = x;
        x = y;
        y = temp;
        sort(y, z);
    } else if (z > x && z > y) {
        temp = x;
        x = z;
        z = temp;
        sort(y, z);
    }
}