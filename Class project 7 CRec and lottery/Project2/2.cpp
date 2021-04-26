/*
 * Date:2021/04/26
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Lottery {
private:
    int lot_num[6];
    int user_num[6];
public:
    Lottery();
    bool outcome[6];
    void gen_lottery(void);
    void buy_a_lottery(void);
    void compare(void);
    void show_result(void);
};

Lottery::Lottery() {
    for (int i = 0; i < 6; i++) {
        lot_num[i] = {0};
        user_num[i] = {0};
        outcome[i] = {0};
    }
}

void Lottery::gen_lottery(void) {
    int i, j;
    for (i = 0; i < 6; i++) {
        do {
            lot_num[i] = rand() % 49 + 1;
            for (j = 0; j < i; j++) {
                if (lot_num[i] == lot_num[j]) {
                    lot_num[i] = 0;
                    break;
                }
            }
        } while (lot_num[i] == 0);
    }
}

void Lottery::buy_a_lottery(void) {
    int i, j;
    for (i = 0; i < 6; i++) {
        do {
            user_num[i] = rand() % 49 + 1;
            for (j = 0; j < i; j++) {
                if (user_num[i] == user_num[j]) {
                    user_num[i] = 0;
                    break;
                }
            }
        } while (user_num[i] == 0);
    }
}

void Lottery::compare(void) {
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(user_num[i]==lot_num[j])
                outcome[i]=true;
        }
    }
}

void Lottery::show_result(void) {
    int count=0;
    cout<<"index ";
    for(int i=0;i<6;i++){
        if(outcome[i]==1){
            cout<<i<<", ";
            count++;
        }
    }
    if(count==0){
        cout<<"\b\b\b\b\b\b";
        cout<<"沒中啦笑死"<<endl<<endl;
    }
    else{
        cout<<"\b\b ";
        cout<<"BINGO : 中獎"<<count<<"個號碼"<<endl<<endl;
    }

}

int main(int) {
    int amount;
    cout<<"你要玩幾張?";
    cin>>amount;
    cout<<endl;
    srand(time(NULL));
    for (int i=1;i<=amount;i++){
        cout <<"你的第"<<i<<"張樂透"<<endl;
        Lottery lo;
        lo.gen_lottery();
        lo.buy_a_lottery();
        lo.compare();
        lo.show_result();
    }

    system("pause");
    return 0;
}

