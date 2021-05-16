/*
 * Date:2021/05/16
 * Name:李岱倫
 * Student ID:1090604
 */
#include<iostream>
#include<ctime>
using namespace std;

class StopWatch
{
private:
    clock_t startTime;
    clock_t endTime;
public:
    StopWatch();
    void start();
    void stop();
    double getElapsedTime() const;
};
int main()
{
    StopWatch t1;
    t1.start();
    for(int i=1;i<=5000000;i++)
    {
        cout<<"hello world,";
    }
    t1.stop();

    cout<<endl<<t1.getElapsedTime()<<endl;

    system("pause");
    return 0;
}
StopWatch::StopWatch()
{
    startTime=clock();
}
void StopWatch::start()
{
    startTime=clock();
}
void StopWatch::stop()
{
    endTime=clock();
}double StopWatch::getElapsedTime() const
{
    return (double)(endTime-startTime)/CLOCKS_PER_SEC;
}


