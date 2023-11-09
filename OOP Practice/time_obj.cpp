#include<iostream>
using namespace std;
class Time{
    int hours, minutes, seconds;
    public:
    Time(){}
    Time(int hours, int minutes, int seconds){
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    void now(){
        cout << hours << " : " << minutes << " : " << seconds << endl;
    }
    friend Time operator+(Time t1, Time t2);
};
Time operator+(Time t1, Time t2)
{
        Time t;
        t.hours = t1.hours + t2.hours;
        t.minutes = t1.minutes + t2.minutes;
        t.seconds = t1.seconds + t2.seconds;
        int h,m,s;
        s = t.seconds % 60;
        m = t.minutes + (t.seconds / 60);
        h = t.hours + (t.minutes / 60);
        t.hours = h;
        t.minutes = m % 60;
        t.seconds = s;
        return t;
}
int main()
{
    Time t1(12, 59, 50);
    Time t2(12, 59, 50);
    t1.now();
    t2.now();
    Time t3 = t1 + t2;
    t3.now();
    return 0;
}