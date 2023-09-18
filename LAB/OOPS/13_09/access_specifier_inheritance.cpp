#include<iostream>
using namespace std;
class fir{
    int a;
    protected:
    int b;
    public:
    int c;
};
class sec: public fir{
    public:
    void get(){
        // cout << "Enter a : ";
        // cin >> a; // Error ! Inaccessible
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter c : ";
        cin >> c;
    }
    void disp(){
        // cout << "a = " << a << endl; // Error ! Inaccessible
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
class third: public sec{
    void disp(){
        cout << b; // We can access b from third because sec inherits fir and third inherits sec, but it cant be accessed from main
    }
};
int main(){
    // sec s;
    // s.b; // Error ! inaccessible
    sec s1;
    s1.get();
    s1.disp();
    return 0;
}