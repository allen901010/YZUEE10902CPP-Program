/*
 * Date:2021/03/26
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class CWin {
public:
    int width;
    int height;

    void show_area() {
        cout << "Area = " << width * height << endl;
    }
};

int main() {
    CWin win1;
    win1.width = 5;
    win1.height = 12;
    win1.show_area();
    system("pause");
}