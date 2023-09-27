#include<iostream>
using namespace std;
class num{
    public:
    int x;
    num(int x){
        this->x = x;
    }
    num operator*(const num b){
        return num(x * b.x);
    }
    void disp(){
        cout << "X = " << x << endl;
    }
};
int main(){
    num a(10), b(20);
    num c = a * b;
    c.disp();
    return 0;
}