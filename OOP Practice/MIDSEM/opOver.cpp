#include<iostream>
using namespace std;
class num{
    public:
    int a;
    num(int a){
        this->a = a;
    }
    int operator<(num b){
        if(a < b.a) return 1;
        return 0;
    }
    int operator<=(num b){
        if(a <= b.a) return 1;
        return 0;
    }
    void disp(){
        cout << "a = " << a << endl;
    }
};
int main(){
    num n1(5);
    num n2(5);
    num n3(4);
    cout << (n1 < n2) << endl; // 0
    cout << (n1 <= n2) << endl; // 1
    cout << (n3 < n1) << endl; // 1
    return 0;
}