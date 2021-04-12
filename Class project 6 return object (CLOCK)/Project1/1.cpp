/*
 * Date:2021/04/12
 * Student ID:1090604
 * Name:李岱倫
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class Clock
{
private:
    void add_one_sec()
    {
        sec++;
    }
    char id;
    int hour,min,sec;
public:
    Clock(char i,int h,int m,int s);
    Clock(char i);
    void setTime(int hour,int min,int sec);
    void getTime(int &h,int &m,int &s);
    void printTime();
    void incrementSeconds(int n);
    void incrementMinutes(int n);
    void incrementHours(int n);
    bool is_equal(Clock a);
    Clock bigger_clock(Clock a);
    char get_id();
};

int main()
{
    int h,m,s;
    Clock myclock('M',2,12,45);
    Clock yourclock('Y');

    myclock.getTime(h,m,s);
    cout<<"myclock:"<<endl;
    cout<<"Time is:"<<h<<":"<<m<<":"<<s<<endl<<endl;
    cout<<"yourclock(set):"<<endl;
    h=23;m=50;s=59;
    yourclock.setTime(h,m,s);
    yourclock.printTime();
    cout<<"increse 2 secs"<<endl;
    yourclock.incrementSeconds(2);
    yourclock.printTime();
    cout<<"increse 14 mins"<<endl;
    yourclock.incrementMinutes(14);
    yourclock.printTime();
    cout<<"increse 1 hours"<<endl;
    yourclock.incrementHours(1);
    yourclock.printTime();
    cout<<endl<<"Does myclock equal to yourclock?"<<endl;
    if(myclock.is_equal(yourclock)==true)
        cout<<"equal"<<endl;
    else
        cout<<"unequal"<<endl;
    cout<<endl<<"bigger clock:"<<endl;
    cout<<myclock.bigger_clock(yourclock).get_id()<<endl;

    system("pause");
}
Clock::Clock(char i,int h,int m,int s):id(i),hour(h),min(m),sec(s)
{
}
Clock::Clock(char i):id(i),hour(0),min(0),sec(0)
{
}
void Clock::setTime(int h,int m,int s)
{
    hour=h;
    min=m;
    sec=s;
}
void Clock::getTime(int &h,int &m,int &s)
{
    h=hour;
    m=min;
    s=sec;
}
void Clock::printTime()
{
    cout<<"Time "<<hour<<":"<<min<<":"<<sec<<endl;
}
void Clock::incrementSeconds(int n)
{
    for(int i=1;i<=n;i++)
    {
        add_one_sec();
    }
    while(sec>=60)
    {
        sec-=60;
        min++;
    }
    while(min>=60)
    {
        min-=60;
        hour++;
    }
    while(hour>=24)
    {
        hour-=24;
    }
}
void Clock::incrementMinutes(int n)
{
    for(int i=1;i<=n*60;i++)
    {
        add_one_sec();
    }
    while(sec>=60)
    {
        sec-=60;
        min++;
    }
    while(min>=60)
    {
        min-=60;
        hour++;
    }
    while(hour>=24)
    {
        hour-=24;
    }
}
void Clock::incrementHours(int n)
{
    for(int i=1;i<=n*3600;i++)
    {
        add_one_sec();
    }
    while(sec>=60)
    {
        sec-=60;
        min++;
    }
    while(min>=60)
    {
        min-=60;
        hour++;
    }
    while(hour>=24)
    {
        hour-=24;
    }
}
bool Clock::is_equal(Clock a)
{
    if(hour==a.hour&&min==a.min&&sec==a.sec)
        return true;
    else
        return false;
}
Clock Clock::bigger_clock(Clock a)
{
    if(a.hour>hour)
    {
        return a;
    }
    if(a.min>min)
    {
        return a;
    }
    if(a.sec>sec)
    {
        return a;
    }
    return *this;
}
char Clock::get_id()
{
    return id;
}
