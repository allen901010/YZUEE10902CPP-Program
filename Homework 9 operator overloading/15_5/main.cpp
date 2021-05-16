/*
 * Date:2021/05/16
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>
#include <cstdlib>

using namespace std;
class CWin
{
private:
    char id,*title;
public:
    CWin(char i='D',char *text="Default window"):id(i)
    {
        title=new char[50];
        strcpy(title,text);
    }
    void set_data(char i,char*text)
    {
        id=i;
        strcpy(title,text);
    }
    void operator=(const CWin &win)
    {
        id=win.id;
        strcpy(this->title,win.title);
    }

    void show()
    {
        cout<<"Window "<<id<<": "<<title<<endl;
    }
    ~CWin(){delete []title;}
    CWin(const CWin &win)
    {
        id=win.id;
        strcpy(title,win.title);
    }
};


int main()
{
    CWin win1('A',"Main window");
    CWin win2;

    win1.show();
    win2.show();
    win1=win2;
    cout<<endl<<"after set win1=win2 ..."<<endl;
    win1.show();
    win2.show();

    win1.set_data('B',"Hello window");
    cout<<endl<<"after change data member of win1 ..."<<endl;
    win1.show();
    win2.show();

    system("pause");
    return 0;
}






















