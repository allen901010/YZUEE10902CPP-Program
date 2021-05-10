/*
 * Date:2021/05/05
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class CWin {
private:
    char id;
    int width;
    int height;
public:
    int area() {
        return width * height;
    }

    void show_area(void) {
        cout << "Window " << id << ", area=" << area() << endl;
    }

    friend void set_data(CWin &win, char i, int w, int h) {
        win.id = i;
        win.width = w;
        win.height = h;
    }

    friend void set_data(CWin &win, char i) {
        win.id = i;
    }

    friend void set_data(CWin &win, int w, int h) {
        win.width = w;
        win.height = h;
    }

};

int main(void) {
    CWin win1, win2;
    set_data(win1, 'A', 50, 40);
    set_data(win2, 'B');
    set_data(win2, 80, 120);
    win1.show_area();
    win2.show_area();
    system("pause");
    return 0;

}