/*
 * Date:2021/05/02
 * Name:李岱倫
 * Student ID:1090604
*/
#include<cstdlib>
#include<iostream>
#include<time.h>
#define BALLNUMBER 20
using namespace std;

class GlassBall
{
private:
    int remain;
public:
    int n=1,mem;
    void reset(int n);
    void computer_take();
    void human_take();
    bool conti();
};

void GlassBall::reset(int n)
{
    remain=n;
}
void GlassBall::computer_take()
{
    int a;
    cout<<"computer's turn:"<<endl;
    if(remain==1||remain==2)
    {
        a=1;
        remain-=a;
    }
    if(remain==3)
    {
        a=2;
        remain-=a;
    }
    if(remain>3)
    {
        a=1+rand()%3;
        remain-=a;
    }
    cout<<"remaining balls:"<<remain<<endl;
}
void GlassBall::human_take()
{
    int a=0;
    if(mem==1&&remain==0)
    {
        cout<<"you win!"<<endl;
        conti()==false;
        goto end;
    }
    if(mem>=2)
    {
        cout<<"第"<<n<<"位玩家："<<endl;
        start1:
        cin>>a;
        if(a>3||a<1)
        {
            cout<<"error";
            goto start1;
        }
        remain-=a;
        if(remain==0)
        {
            cout<<"第"<<n<<"位玩家輸了"<<endl;
            conti()==false;
            goto end;
        }
        cout<<"remaining balls:"<<remain<<endl;
        if(mem==2&&n==2)
            n=0;
        if(mem==3&&n==3)
            n=0;
    }
    if(mem==1)
    {
        cout<<"human's turn:"<<endl;
        start2:
        cin>>a;
        if(a>3||a<1)
        {
            cout<<"error";
            goto start2;
        }
        remain-=a;
    }
    if(mem==1&&remain==0)
    {
        cout<<"you lose!"<<endl;
        conti()==false;
        goto end;
    }
    n++;
    end:;
}
bool GlassBall::conti()
{
    if(remain==0)
        return false;
    else
        return true;
}

int main()
{
    srand(time(NULL));
    GlassBall win;
    cout<<"輸入玩家數:";
    cin>>win.mem;
    win.reset(BALLNUMBER);
    if(win.mem==1)
    {
        while(win.conti()!=false)
        {
            win.computer_take();
            win.human_take();
        }
    }
    if(win.mem==2)
    {
        while(win.conti()!=false)
        {
            win.human_take();
        }
    }
    if(win.mem==3)
    {
        while(win.conti()!=false)
        {
            win.human_take();
        }
    }

    system("pause");
}
