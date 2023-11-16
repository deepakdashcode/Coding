#include<iostream>
using namespace std;
class B;
class A{
    public:
    int m;
    A(){}
    A(int m1)
    {
        m = m1;
    }
    friend void disp(A a, B b);
};
class B{
    public:
    int m;
    B(){}
    B(int m1)
    {
        m = m1;
    }
    friend void disp(A a, B b);
};
void disp(A a, B b){
    cout << a.m + b.m << endl;
}
int main(){
   static A a;static B b;
    disp(a, b);
    return 0;
}