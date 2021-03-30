/*
Date:2021/03/29
Name:李岱倫
Student ID:1090604
*/

#include <iostream>
#include <cstdlib>
#include<time.h>
#define BALLNUMBER 20
using namespace std;

class GlassBall
{
private:
    int ballnumber;
public:
    bool conti;

    GlassBall(int n=BALLNUMBER,bool t=true)
    {
        ballnumber=n;
        conti=t;
    }
    void reset(int n);
    void computer_take();
    void human_take();
};
void GlassBall::reset(int n)
{
    ballnumber=n;
}
void GlassBall::computer_take()
{
    int k;
    if(ballnumber==0)
        goto end;
    if(ballnumber>3)
    {
        k=1+rand()%3;
        cout<<"Computer takes "<<k<<" balls"<<endl;
        ballnumber-=k;
        goto fuck;
    }

    if(ballnumber==3){
        k=1+rand()%2;
        cout<<"Computer takes "<<k<<" balls"<<endl;
        ballnumber-=k;
        goto fuck;
    }

    if(ballnumber==1||ballnumber==2) {
        cout<<"Computer takes 1 balls"<<endl;
        ballnumber--;
        goto fuck;
    }
    fuck:
    cout<<"remaining balls="<<ballnumber<<endl;
    if(ballnumber==0)
    {
        conti=false;
        cout<<"You Win!"<<endl;
    }
    end:;
}
void GlassBall::human_take()
{
    int i;
    if(ballnumber==0)
        goto end;
    cout<<"Input the balls(1-3):";
    input:
    cin>>i;
    if(i<1||i>3)
    {
        cout<<"Error!"<<endl;
        goto input;
    }
    ballnumber-=i;
    cout<<"remaining balls="<<ballnumber<<endl;
    if(ballnumber==0)
    {
        conti=false;
        cout<<"You Loss!"<<endl;
    }
    end:;
}

int main()
{
    int n,m,coin=rand()%2;
    srand(time(NULL));
    start:
    GlassBall ball1;
    ball1.reset(BALLNUMBER);
    cout<<"Key in 0 or 1 to decide who is first(Is random)"<<endl;
    cin>>n;
    if(n>1||n<0)
    {
        cout<<"Error!"<<endl;
        goto start;
    }
    if(n==coin)
    {
        cout<<"You go first\ntotal balls="<<BALLNUMBER<<endl;
        while(ball1.conti==true)
        {
            ball1.human_take();
            ball1.computer_take();
        }
        again1:
        cout<<"0.End\n1.Play again"<<endl;
        cin>>m;
        if(m>1||m<0)
        {
            cout<<"Error!"<<endl;
            goto again1;
        }
        if(m==1)
        {
            ball1.reset(BALLNUMBER);
            goto start;
        }
    }
    if(n!=coin)
    {
        cout<<"Computer go first\ntotal balls="<<BALLNUMBER<<endl;
        while(ball1.conti==true)
        {
            ball1.computer_take();
            ball1.human_take();
        }
        again2:
        cout<<"0.End\n1.Play again?"<<endl;
        cin>>m;
        if(m>1||m<0)
        {
            cout<<"Error!"<<endl;
            goto again2;
        }
        if(m==1)
        {
            ball1.reset(BALLNUMBER);
            goto start;
        }
    }

    system("pause");
}
