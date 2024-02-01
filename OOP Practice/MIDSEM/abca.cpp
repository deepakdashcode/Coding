#include<iostream>
using namespace std;
class Base{
    protected:
    int x;
    Base(){
        cout << "Base created\n";
    }
    void disp(){
        cout << "Base display Called\n";
    }
};
class Derived: public Base{
    public:
    Derived(int a){
        x = a;
    }
    void disp(){
        Base::disp();
        cout << x << endl;
    }
};
int main(){
    Derived d(10);
    d.disp();
    return 0;
}