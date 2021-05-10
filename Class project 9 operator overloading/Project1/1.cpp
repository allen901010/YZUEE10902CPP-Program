/*
 * Date:2021/05/10
 * Name:李岱倫
 * Student ID:1090604
 */

#include <iostream>

using namespace std;

class CPerson {
private:
    char *name;
    float height;
    float weight;
    float BMI;
public:
    CPerson(char str[], float h = 0.0, float w = 0.0) {
        name = new char[strlen(str) + 1];
        strcpy(name, str);
        height = h;
        weight = w;
        BMI = weight / (height * height / 10000);
    }

    CPerson(const CPerson &person) {
        name = person.name;
        height = person.height;
        weight = person.weight;
    }

    ~CPerson() {
        cout << "Destructor is called" << endl;
        system("pause");
    }

    void print();
    bool operator>(CPerson &person);
    bool operator>(const float value);
    bool operator<(CPerson &person);
    bool operator<(const float value);
    friend bool operator>(const float value, CPerson &person);
    friend bool operator<(const float value, CPerson &person);
};

int main() {
    CPerson me("Allen", 180, 120);
    CPerson p1("John", 170, 100);
    CPerson p2("Shelby", 180, 40);
    CPerson p3("Gatsby", 160, 90);
    me.print();
    p1.print();
    p2.print();
    p3.print();
    if (me > p1)
        cout << "me>p1" << endl;
    else
        cout << "p1>me" << endl;
    if (p2 < p3)
        cout << "p2<p3" << endl;
    else
        cout << "p3<p2" << endl;
    if (me > 24)
        cout << "me 過重" << endl;
    if (me < 24 && me > 18.5)
        cout << "me 正常" << endl;
    if (me < 18.5)
        cout << "me 過輕" << endl;
    if (p1 > 24)
        cout << "p1 過重" << endl;
    if (p1 < 24 && p1 > 18.5)
        cout << "p1 正常" << endl;
    if (p1 < 18.5)
        cout << "p1 過輕" << endl;
    if (18.5 > p3)
        cout << "p3 過輕" << endl;
    if (24 > p3 && 18.5 < p3)
        cout << "p2 正常" << endl;
    if (24 < p3)
        cout << "p3 過重" << endl;

    return 0;

}

void CPerson::print() {
    cout << "Name :" << name << endl;
    cout << "height = " << height << endl;
    cout << "weight = " << weight << endl;
    cout << "BMI = " << BMI << endl;
}

bool CPerson::operator>(CPerson &person) {
    if (this->BMI > person.BMI)
        return true;
    return false;
}

bool CPerson::operator>(const float value) {
    if (BMI > value)
        return true;
    return false;
}

bool CPerson::operator<(CPerson &person) {
    if (BMI < person.BMI)
        return true;
    return false;
}

bool CPerson::operator<(const float value) {
    if (BMI < value)
        return true;
    return false;
}

bool operator>(const float value, CPerson &person) {
    if (value > person.BMI)
        return true;
    return false;
}

bool operator<(const float value, CPerson &person) {
    if (value < person.BMI)
        return true;
    return false;
}
