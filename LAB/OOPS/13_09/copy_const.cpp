#include<iostream>
using namespace std;
class A{
    public:
    int a, b;
    A(int a, int b){
    this -> a = a;
    this -> b = b;
    }
    A(A &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    void disp()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main(){
    cout << "for o1\n";
    A o1(2, 3);
    o1.disp();
    cout << "for o2\n";
    A o2(o1);
    o2.disp();
    
    return 0;
}
/*
OUTPUT
for o1
a = 2
b = 3
for o2
a = 2
b = 3
*/