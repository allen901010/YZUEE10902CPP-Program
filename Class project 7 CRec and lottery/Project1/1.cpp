/*
 * Date:2021/04/26
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class CRec {
private:
    char id;
    int width;
    int height;

    int area();

public:
    CRec();

    CRec(char i, int w = 10, int h = 10);

    void show();

    CRec bigger_area(CRec rec);

    CRec *biggest_area(CRec &rec1, CRec &rec2);

};

CRec::CRec() {
    width = 0;
    height = 0;
    cout << "呼叫0個參數的 constructor" << endl;
}

CRec::CRec(char i, int w, int h) {
    id = i;
    width = w;
    height = h;
    cout << id << ": 呼叫3個參數的constructor" << endl;
}

int CRec::area() {
    int x = width * height;
    return x;
}

void CRec::show() {
    cout << "id=" << id << ", width=" << width << ", height="
    << height << ", area=" << area() << endl;
}

CRec CRec::bigger_area(CRec rec) {
    if (area() > rec.area())
        return *this;
    else
        return rec;
}

CRec *CRec::biggest_area(CRec &rec1, CRec &rec2) {
    if (this->area() > rec1.area() && this->area() > rec2.area())
        return this;
    if (rec1.area() > this->area() && rec2.area())
        return &rec1;
    if (rec2.area() > this->area() && rec1.area())
        return &rec2;
}

int main(void) {
    CRec win1('A');
    CRec win2('B', 20, 30);
    CRec win3('C', 80, 10);
    CRec win4;
    cout << "Bigger area: ";
    win1.bigger_area(win2).show();
    cout << "Biggest area: ";
    (win2.biggest_area(win1, win3))->show();

    system("pause");
    return 0;
}