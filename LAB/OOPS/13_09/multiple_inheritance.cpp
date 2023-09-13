#include<iostream>
using namespace std;

class Student1{
    public:
    int m1, m2, m3, m4;
    Student1(int p, int q, int r, int s){
        m1 = p;
        m2 = q;
        m3 = r;
        m4 = s;
    }
    Student1(){}
};
class Student2{
    public:
    int m1, m2, m3, m4;
    Student2(int p, int q, int r, int s){
        m1 = p;
        m2 = q;
        m3 = r;
        m4 = s;
    }
    Student2(){}
};

class Disp: public Student1, public Student2{
    public:
    Disp(){

    }
    void get(){
        cout << "Enter 4 marks of student 1 : ";
        cin >> Student1::m1 >> Student1::m2 >> Student1::m3 >> Student1::m4;
        cout << "Enter 4 marks of student 2 : ";
        cin >> Student2::m1 >> Student2::m2 >> Student2::m3 >> Student2::m4;
    }
    void disp(){
        float avg1, avg2;
        avg1 = (Student1::m1 + Student1::m2 + Student1::m3 + Student1::m4) / 4.0;
        avg2 = (Student2::m1 + Student2::m2 + Student2::m3 + Student2::m4) / 4.0;

        cout << "Average 1 = " << avg1 << endl;
        cout << "Average 2 = " << avg2 << endl;
    }
};
int main(){
    Disp d;
    d.get();
    d.disp();
    return 0;
}