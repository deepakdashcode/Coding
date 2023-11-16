#include<iostream>
using namespace std;
class B{
    public:
    B(){
        cout << "Base Created\n";
    }
    ~B(){
        cout << "Base Destroyed\n";
    }
};
class D: public B{
    public:
    D(){
        cout << "Derived Created\n";
    }
    ~D(){
        cout << "Derived Destroyed\n";
    }
};
int main(){
    D* d = new D();
    B* b = d;
    delete b;
    return 0;
}