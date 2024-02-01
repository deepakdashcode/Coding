#include<iostream>
using namespace std;
class num{
    public:
    int a;
    num(int a){
        this->a = a;
    }
    num operator*(num b)
    {
        num c(0);
        c.a = a * b.a;
        return c;
    }
    void disp(){
        cout << "a = " << a << endl;
    }
};
int main(){
    num a(5);
    num b = a * 5;
    b.disp();
    return 0;
}