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
    CWin(char i, int w, int h) : id(i), width(w), height(h) {}

    int operator>(CWin &win) const;
    int operator>(const int &var) const;

    int area() const {
        return width * height;
    }
};

int CWin::operator>(CWin &win) const {
    return (this->area() > win.area());
}

int CWin::operator>(const int &var) const {
    return (this->area()>var);
}

int operator>(const int &var,CWin &win)
{
    return (var>win.area());
}
int main() {
    CWin win1('A', 70, 80);
    CWin win2('B', 60, 70);

    if (win1 > win2)
        cout << "win1 is larger than win2" << endl;
    else
        cout << "win1 is smaller than win2" << endl;

    if(win1>7000)
        cout<<"win1 is larger than 7000"<<endl;
    else
        cout<<"win1 is smaller than 7000"<<endl;

    if(4500>win2)
        cout<<"win2 is smaller than 4500"<<endl;
    else
        cout<<"win2 is larger than 4500"<<endl;
    system("pause");
    return 0;
}


