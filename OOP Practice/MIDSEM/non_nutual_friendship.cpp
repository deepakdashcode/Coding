#include<iostream>
using namespace std;
class B;
class A{
    public:
    int m;
    A();
    A(int m1)
    {
        m = m1;
    }
    friend void disp(B b);
};
A::A(){}
class B{
    public:
    int m;
    B(){}
    B(int m1)
    {
        m = m1;
    }
    friend void disp(B b);
};
void disp(B b){
    cout << b.m << endl;
}
int main(){
   static A a;
   
    return 0;
}