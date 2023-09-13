#include<iostream>
using namespace std;
class Date{
    public:
    int m, d, y;
};
class Time{
    public:
    int hr, min, sec;
};
class DateTimePlace: public Date, public Time{
    public:
    char place[50];
};
class Details: public DateTimePlace{
    char name[50];
    public:
    void get(){
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter Date in ddmmyy format : ";
        cin >> d >> m >> y;
        cout << "Enter Time in hhmmss : ";
        cin >> hr >> min >> sec;
        cout << "Enter the place : ";
        cin >> place;
    }
    void disp(){
        cout << "Name : " << name << endl;
        cout << "Date : " << d << "/" << m << "/" << y << endl;
        cout << "Time : " << hr << ":" << min << ":" << sec << endl;
        cout << "Place : " << place << endl;
    }
};

int main(){
    Details d;
    d.get();
    d.disp();
    return 0;
}
/*
Output
Enter name : Deepak
Enter Date in ddmmyy format : 5 11 2004
Enter Time in hhmmss : 3 30 45
Enter the place : Bhubaneswar
Name : Deepak
Date : 5/11/2004
Time : 3:30:45
Place : Bhubaneswar
*/