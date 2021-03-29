/*
 * Date:2021/03/26
 * Name:李岱倫
 * Student ID:1090604
 */

#include<iostream>
#include<cstdlib>

using namespace std;

class CRect {
public:
    int width, height;
    double weight;

    void set(double wg);

    void set(int w, int h);

    void set(double wg, int w, int h);

    void show();
};

void CRect::show() {
    cout << "寬度 = " << width << endl;
    cout << "高度 = " << height << endl;
    cout << "重量 = " << weight << endl;
}

void CRect::set(double wg) {
    weight = wg;
}

void CRect::set(int w, int h) {
    width = w;
    height = h;
}

void CRect::set(double wg, int w, int h) {
    weight = wg;
    width = w;
    height = h;
}

int main() {
    CRect rect1, rect2;
    rect1.set(20, 55, 30);
    cout << "rect1\n";
    rect1.show();
    rect2.set(35, 52, 30);
    cout << "rect2\n";
    rect2.show();
    cout << &rect1 << endl;
    cout << &rect2 << endl;
    system("pause");
}