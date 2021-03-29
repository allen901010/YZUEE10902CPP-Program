/*
 * Date:2021/03/26
 * Name:李岱倫
 * Student ID:1090604
 */

#include<iostream>
#include<cstdlib>

using namespace std;

void sum(int &a, int &b) {
    int c;
    c = a + b;
    a = c;
}

void sort(int &a, int &b) {
    int c;
    if (b > a) {
        c = b;
        b = a;
        a = c;
    }
}

void gcd(int &a, int &b, int &g) {
    int i;
    for (i = 1; i < a && i < b; i++) {
        if (a % i == 0 && b % i == 0)
            g = i;
    }
}

void set_value(int &a, int &b) {
    if (a > b) {
        a = 10;
        b = 100;
    } else {
        a = 100;
        b = 10;
    }
}

int &max(int &a, int &b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a = 12, b = 10, c;
    int &i = a, &j = b, &k = c;
    cout << "a=12  b=10\n";
    sum(i, j);
    cout << "a=" << a << endl;
    sort(i, j);
    cout << "a=21  b=49 找最大公因數\n";
    a = 21, b = 49;
    gcd(i, j, k);
    cout << "最大公因數 : " << c << endl;
    cout << "a=" << a << "  b=" << b << endl;
    set_value(i, j);
    cout << "a=" << a << "  b=" << b << endl;
    a = max(a, b);
    cout << "a=" << a << endl;
    system("pause");
}
