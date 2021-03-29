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
    int width;
    int height;
    double weight;

    void set(double wg);

    void set(int w, int h);

    void set(double wg, int w, int h);

    void show();
};

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

void CRect::show() {
    cout << width << endl << height << endl << weight << endl;
}

int main() {
    CRect a;
    cin >> a.weight >> a.width >> a.height;
    a.set(a.weight);
    a.set(a.width, a.height);
    a.set(a.weight, a.width, a.height);
    a.show();
    system("pause");
}
