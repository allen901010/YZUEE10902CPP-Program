/*
 * Date:2021/03/22
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class Prime_Product
{
private:
    int number;
    bool prime(int x);
    int get_bigger_prime(int num);

public:
    void set_number(int n);
    void prime_product();
};

int main(void){

    int n;
    cin>>n;
    Prime_Product a;
    a.set_number(n);
    a.prime_product();

    system("pause");
    return 0;

}

bool Prime_Product::prime(int x) {
    int counter=0;
    int i=1;
    while (i<=x){
        if(x%i==0){
            counter+=1;
        }
        i+=1;
    }
    if (counter==2)
        return true;
    else
        return false;
}
int Prime_Product::get_bigger_prime(int num) {
    int i=num+1;
    while(prime(i)!=true){
        i++;
    }
    return i;
}
void Prime_Product::set_number(int n) {
    number=n;
}
void Prime_Product::prime_product() {
    int i=2;
    while (number!=1){
        if (number%i==0){
            number/=i;
            cout<<i<<"*";
        }
        else {
            i = get_bigger_prime(i);
        }
    }
    cout<<"\b"<<endl;
}
