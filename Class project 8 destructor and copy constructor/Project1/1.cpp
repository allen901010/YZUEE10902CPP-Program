/*
 * Date:2021/05/03
 * Name:李岱倫
 * Student ID:1090604
 */
#include<cstdlib>
#include<iostream>

using namespace std;

class MyString {
private:
    char *txt;
    int length;
public:
    MyString(char *t);
    MyString(const MyString &str);

    ~MyString() {
        cout << "Destructor is called" << endl;
        system("pause");
    }

    bool find_substring(char a[]);
    MyString cmp(MyString s);
    bool is_equal(MyString s);
    int find_numof_char(char ch);
    void delete_char(char ch);
    void print();
    friend void print(MyString s);

};

MyString::MyString(char *t) {
    cout << "Constructor with one string is called" << endl;
    txt = new char[strlen(t) + 1];
    strcpy(txt, t);
}

MyString::MyString(const MyString &str) {
    cout << "Copy Constructor is called" << endl;
    txt = str.txt;
}

bool MyString::find_substring(char *a) {
    bool test = false;
    for (int i = 0; test == false && i < strlen(txt); i++) {
        if (txt[i] == a[0]) {
            test = true;
            for (int j = 0; test == true && j < strlen(a); j++) {
                if (i + j >= strlen(txt) || txt[i + j] != a[j]) {
                    test = false;
                }
            }
        }
    }
    return test;
}

MyString MyString::cmp(MyString s) {
    int i = 0;
    while (this->txt[i] != '\0' || s.txt[i] != '\0') {
        i++;
    }
    if (this->txt[i] == '\0')
        return *this;
    else
        return s;
}

bool MyString::is_equal(MyString s) {
    int i = 0;
    while (txt[i] != '\0' || s.txt[i] != '\0') {
        if (txt[i] == s.txt[i]) {
            return true;
        }
        else if (txt[i] != s.txt[i]) {
            goto unequal;

        }
        i++;
    }
    if (txt[i] == '\0' && s.txt[i] == '\0')
        return true;
    unequal:
    return false;
}

int MyString::find_numof_char(char ch) {
    int x = 0, i = 0;
    while (txt[i] != '\0') {
        if (txt[i] == ch)
            x++;
        i++;
    }
    return x;
}

void MyString::delete_char(char ch) {
    int i = 0;
    while (txt[i] != '\0') {
        if (txt[i] == ch) {
            int j = i;
            while (txt[j + 1] != '\0') {
                txt[j] = txt[j + 1];
                j++;
            }
        }
        i++;
    }
}

void MyString::print() {
    cout << txt << endl;
}

void print(MyString s) {
    cout<<s.txt<<endl;
}

int main(void) {
    MyString string1("This is an apple.");
    char a[]="This";
    MyString string2("This is");
    MyString string3(string1);
    if(string1.find_substring(a)== true){
        cout<<"Find the substring: "<<a<<endl;
    }
    string1.cmp(string2).print();
    if(string1.is_equal(string3)== true){
        cout<<"They are equal."<<endl;
    }
    cout<<"There are "<<string1.find_numof_char('i')<<" i in the string."<<endl;
    string1.delete_char('i');
    print(string1);
    system("pause");
    return 0;
}