/*
Date:2021/03/15
Name:李岱倫
Student ID:1090604
*/

#include<cstdlib>
#include<iostream>

using namespace std;
#define BALLNUMBER 20;

int gen(int max);

class GlassBall {
private:
public:
    int a=BALLNUMBER;
    void reset(int n);
    void computer_take(void);
    void human_take(void);

};

void GlassBall::reset(int n) {

}

void GlassBall::computer_take(void) {
    if(this->a==1){
        cout<<"You Win!"<<endl;
        return;
    }
    int i=gen(3);
    cout<<"Computer Take : "<<i<<"balls"<<endl;
    this->a=this->a-i;
    cout<<"Remaining Balls = "<<this->a<<endl;
}

void GlassBall::human_take(void) {
    if(this->a==1){
        cout<<"You Lose!"<<endl;
        return;
    }
    int i,j=this->a;
    cout<<"Input the Balls(1-3) : ";
    cin>>i;
    this->a=j-i;
    cout<<"Remaining Balls = "<<this->a<<endl;
}

int main(int) {
    GlassBall g;
    cout<<"Total balls = "<<BALLNUMBER;
    cout<<endl;
    while(g.a>1){
        g.human_take();
        g.computer_take();
    }

    system("pause");
    return 0;
}

int gen(int max) {
    return 1 + rand() % max;
};