#include<iostream>
using namespace std;
class Base{
    public:
    Base(){

    }
    virtual ~Base(){
        cout << "Base Destructor\n";
    }
    void disp(){
        cout << "Displaying Base\n";
    }
};
class Derived:public Base{
    public:
    ~Derived(){
        cout << "Derived Destructor\n";
    }
    void disp(){
        cout << "Displaying Derived\n";
    }
};
int main()
{
    Derived* ptr= new Derived();
    Base* ptr1 = ptr;
    ptr1->disp();
    ptr->disp();
    return 0;
}