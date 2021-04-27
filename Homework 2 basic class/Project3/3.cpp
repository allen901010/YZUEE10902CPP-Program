/*
 * Date:2021/03/14
 * Name:李岱倫
 * Student ID:1090604
*/

#include<cstdlib>
#include<iostream>

using namespace std;

class CBox
{
public:

    int length;
    int width;
    int height;

    int volume()
    {
        return length * width * height;
    }
    int surfacearea()
    {
        return (length * width + width * height + length * height) * 2;
    }
};

int main(void)
{
    CBox Box1;
    Box1.height = 10;
    Box1.width = 20;
    Box1.length = 30;

    cout << "Box1" << endl;
    cout << "height = " << Box1.height << endl;
    cout << "width = " << Box1.width << endl;
    cout << "length = " << Box1.length << endl;
    cout << "Box1-volume = " << Box1.volume() << endl;
    cout << "Box1-surfacearea = " << Box1.surfacearea() << endl;

    system("pause");
    return 0;
}