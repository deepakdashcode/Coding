#include<iostream>
using namespace std;
class num{
    public:
    int x;
    num(int x){
        this->x = x;
    }
    void operator++(){
        ++x;
        cout << "Prefix" << endl;
    }
    void operator++(int){
        x ++;
        cout << "Postfix" << endl;
    }
    void disp(){
        cout << "X = " << x << endl;
    }
};
int main(){
    num a(10);
    ++a;
    a.disp();
    a++;
    a.disp();
    return 0;
}