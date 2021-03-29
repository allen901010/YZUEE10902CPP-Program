/*
 * Date:2021/03/26
 * Name:李岱倫
 * Student ID:1090604
 */

#include<iostream>
#include<cstdlib>

using namespace std;

class Calculator {
public:
    int add(int, int);

    int sub(int, int);

    int mul(int, int);

    float div(int, int);
};

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::sub(int a, int b) {
    return a - b;
}

int Calculator::mul(int a, int b) {
    return a * b;
}

float Calculator::div(int a, int b) {
    return (float) a / b;
}

int main() {
    Calculator x;
    int a, b;
    float c;
    cout << "Input a and b:" << endl;
    cin >> a;
    cin >> b;
    cout << x.add(a, b) << endl;
    cout << x.sub(a, b) << endl;
    cout << x.mul(a, b) << endl;
    cout << x.div(a, b) << endl;
    system("pause");
}