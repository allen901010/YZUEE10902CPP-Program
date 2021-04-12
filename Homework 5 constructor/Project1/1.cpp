/*
 name:李岱倫
 student ID:1090604
 date:3/30
 */
#include<iostream>
#include<cstdlib>
#include<time.h>
#define BALL 20
using namespace std;


class GlassBall
{
public:
    int ball;
    void reset(int n);
    void computer_take();
    void human_take();
};

void GlassBall::reset(int n)
{
    ball=n;
}
void GlassBall::computer_take()
{
    int n;
    if(ball==0)
    {
        cout<<"You Lose!"<<endl;
        ball=-1;
        goto end;
    }
    if(ball<3&&ball>0)
    {
        ball--;
        n=1;
        cout<<"computer took "<<n<<" balls."<<endl;

    }
    if(ball==3)
    {
        n=rand()%2+1;
        ball-=n;
        cout<<"computer took "<<n<<" balls."<<endl;

    }
    if(ball>3)
    {
        n=rand()%3+1;
        ball-=n;
        cout<<"computer took "<<n<<" balls."<<endl;

    }
    cout<<"remaining balls="<<ball<<endl;
    end:;
}
void GlassBall::human_take()
{
    int n;
    if(ball==0){
        cout<<"You win!"<<endl;
        goto end;
    }

    error:
    cout<<"Input the number if ball you're going to pick:";
    cin>>n;
    if(n>3||n<1)
    {
        cout<<"Error!"<<endl;
        goto error;
    }
    ball-=n;
    cout<<"remaining balls="<<ball<<endl;
    end:;
}

int main()
{
    srand(time(NULL));
    GlassBall ball1,ball2;

    ball1.reset(BALL);
    ball2.reset(BALL);

    while(ball1.ball!=0||ball2.ball!=0)
    {
        if(ball1.ball==0)
        {
            cout<<"Game A has finished."<<endl;
        }
        if(ball1.ball!=0)
        {
            cout<<"A:"<<endl;
            ball1.computer_take();
            ball1.human_take();
        }
        cout<<endl;
        if(ball2.ball==0)
        {
            cout<<"Game B has finished."<<endl;
        }
        if(ball2.ball!=0)
        {
            cout<<"B:"<<endl;
            ball2.computer_take();
            ball2.human_take();
        }
    }
    if(ball1.ball==0)
    {
        cout<<"Game A has finished."<<endl;
    }
    if(ball2.ball==0)
    {
        cout<<"Game B has finished."<<endl;
    }
    system("pause");
}