/*
 * Date:2021/05/16
 * Name:李岱倫
 * Student ID:1090604
 */
#include <iostream>
#include <cstdlib>

using namespace std;

class CWin {
private:
    char id;
    int width, height;
public:
    CWin(char i = 'D', int w = 10, int h = 10) : id(i), width(w), height(h) {}

    int larger_width(CWin &win);
    int larger_height(CWin &win);

    void show_member() const {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
    }
};

int CWin::larger_width(CWin &win) {
    if (this->width > win.width)
        return this->width;
    else
        return win.width;
}

int CWin::larger_height(CWin &win) {
    if (this->height > win.height)
        return this->height;
    else
        return win.height;
}

CWin operator+(CWin &win1, CWin &win2) {
    int w, h;
    w = win1.larger_width(win2);
    h = win1.larger_height(win2);
    return CWin('D', w, h);
}

int main() {
    CWin win1('A', 70, 80);
    CWin win2('B', 60, 90);
    CWin win3;
    win3 = win1 + win2;
    win3.show_member();

    system("pause");
    return 0;
}