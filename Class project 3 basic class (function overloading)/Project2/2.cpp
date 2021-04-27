/*
 * Date:2021/03/15
 * Name:李岱倫
 * Student ID:1090604
 */

#include<cstdlib>
#include<iostream>
using namespace std;

class NumTran
{
public:
    int first_oct;
    int second_oct;
    int diff_value;
    void get_two_oct_numbers(void);
    void octToDec(int oct_num, int* result);
    void decToOct(int dec_num, int* result);
    void diff(void);
    void diff(int f_oct, int s_oct, int* result);
};
int main(void)
{
    NumTran a;

    cout << "Enter two oct number that first num bigger than second num" << endl;
    a.get_two_oct_numbers();
    a.diff();
    cout << a.first_oct << "-" << a.second_oct << "=" << a.diff_value << endl;
    a.get_two_oct_numbers();

    int first = a.first_oct;
    int second = a.second_oct;
    int result;
    a.diff(first, second, &result);
    cout << first << "-" << second << "=" << result << endl;
    system("pause");
    return 0;
}
void NumTran::get_two_oct_numbers(void)
{
    cout << "first_oct = ";
    cin >> first_oct;
    cout << "second_oct = ";
    cin >> second_oct;

    if (second_oct > first_oct)
    {
        cout << "Error! Enter again!" << endl;
        cout << "first_oct = ";
        cin >> first_oct;
        cout << "second_oct = ";
        cin >> second_oct;
    }
}
void NumTran::octToDec(int oct_num, int* result)
{
    int decimalNumber = 0, i = 0, rem;
    while (oct_num != 0)
    {
        rem = oct_num % 10;
        oct_num /= 10;
        decimalNumber += rem * pow(8, i);
        i++;
    }
    *result = decimalNumber;
}
void NumTran::decToOct(int dec_num, int* result)
{
    int rem, i = 1, octalNumber = 0;
    while (dec_num != 0)
    {
        rem = dec_num % 8;
        dec_num /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    *result = octalNumber;
}
void NumTran::diff()
{
    int f_oct, s_oct;
    int diff_dec;
    octToDec(first_oct, &f_oct);
    octToDec(second_oct, &s_oct);
    diff_dec = f_oct - s_oct;
    decToOct(diff_dec, &diff_value);
}
void NumTran::diff(int f_oct, int s_oct, int* result)
{
    int f_dec, s_dec, diff_dec;
    octToDec(f_oct, &f_dec);
    octToDec(s_oct, &s_dec);
    diff_dec = f_dec - s_dec;
    decToOct(diff_dec, &diff_value);
    *result = diff_value;
}
