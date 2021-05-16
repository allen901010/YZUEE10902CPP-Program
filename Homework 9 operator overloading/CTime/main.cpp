/*
 * Date:2021/05/16
 * Name:李岱倫
 * Student ID:1090604
 */
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class CTime {
private:
    int hour, min;
    double sec;
    double time_long;
public:
    CTime(int h = 0, int m = 0, double s = 0) : hour(h), min(m), sec(s), time_long((h * 3600) + (m * 60) + s) {}

    void show_time() const {
        cout << hour << "hr " << min << "min " << sec << "sec" << endl;
    }

    void set_time(int a, int b, double c) {
        hour = a;
        min = b;
        sec = c;
    }

    CTime operator=(const CTime &t) {
        this->hour = t.hour;
        this->min = t.min;
        this->sec = t.sec;
        return *this;
    }

    CTime operator+(CTime &t) {
        int h, m;
        double s;
        h = this->hour + t.hour;
        m = this->min + t.min;
        s = this->sec + t.sec;
        if (s >= 60) {
            m++;
            s -= 60;
        }
        if (m >= 60) {
            h++;
            m -= 60;
        }
        if (h >= 24) {
            h -= 24;
        }
        return CTime(h, m, s);
    }

    CTime operator-(CTime &t) {
        int h, m;
        double s;
        h = this->hour - t.hour;
        m = this->min - t.min;
        s = this->sec - t.sec;
        if (s < 0) {
            m--;
            s += 60;
        }
        if (m < 0) {
            h--;
            m += 60;
        }
        if (h < 0) {
            h += 24;
        }
        return CTime(h, m, s);
    }

    CTime operator*(const int &var) {
        int h, m;
        double s;
        h = this->hour * var;
        m = this->min * var;
        s = this->sec * var;
        while (s >= 60) {
            s -= 60;
            m++;
        }
        while (m >= 60) {
            m -= 60;
            h++;
        }
        while (h >= 24) {
            h -= 24;
        }
        return CTime(h, m, s);
    }

    CTime operator/(const int &var) {
        int h, m;
        double s;
        h = this->hour / var;
        m = this->min / var;
        s = this->sec / var;
        m += ((float) (hour % var) / var * 60);
        s += ((float) (min % var) / var * 60);
        return CTime(h, m, s);
    }

    int operator>(CTime &t) const {
        return this->time_long > t.time_long;
    }

    int operator<(CTime &t) const {
        return this->time_long < t.time_long;
    }
};

int main() {
    CTime t1(10, 48, 39);
    CTime t2(23, 59, 59);
    CTime t3, t4;

    t1.show_time();
    t2.show_time();
    t3.show_time();

    t1.set_time(23, 59, 59);
    t1.show_time();

    if (t1 > t2)
        cout << "t1 is longer than t2" << endl;
    else
        cout << "t1 is shorter than t2" << endl;
    t3 = t1 + t2;
    t3.show_time();
    t3 = t1 - t2;
    t3.show_time();
    t3 = t1 * 3;
    t3.show_time();
    t3 = t1 / 3;
    t3.show_time();

    t3 = t2;
    t3.show_time();
    t2 = t3 = t4 = t1;
    t1.show_time();
    t2.show_time();
    t3.show_time();
    t4.show_time();

    system("pause");
    return 0;
}
