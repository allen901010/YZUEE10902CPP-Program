/*
 * Date:2021/03/08
 * Name:李岱倫
 * Student ID:1090604
*/

#include<cstdlib>
#include<iostream>
using namespace std;

class CBox
{
public:
    int width;
    int height;
    int length;

    int volume()
    {
        return width * height * length;
    }

    int surfacearea()
    {
        int a = width * height;
        int b = width * length;
        int c = height * length;
        return 2 * a + 2 * b + 2 * c;
    }
};
int main(void)
{
    CBox mybox1, mybox2;
    mybox1.width = 5;
    mybox1.height = 8;
    mybox1.length = 10;

    mybox2.width = 6;
    mybox2.height = 20;
    mybox2.length = 13;

    cout << "mybox1 : " << endl << "mybox1 volume = " << mybox1.volume() << endl
         << "mybox1 surfaceArea = " << mybox1.surfacearea() << endl << endl;
    cout << "mybox2 : " << endl << "mybox2 volume = " << mybox2.volume() << endl
         << "mybox2 surfaceArea = " << mybox2.surfacearea() << endl << endl;

    system("pause");
    return 0;
}