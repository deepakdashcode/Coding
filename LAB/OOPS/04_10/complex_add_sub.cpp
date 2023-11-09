#include<iostream>
using namespace std;
class com{
    int real, imag;
    public:
    com(int r, int i){
        real = r;
        imag = i;
    }
    void disp(){
        cout << real << " + i(" << imag << ")\n"; 
    }
    friend com operator+(com, com);
    friend com operator-(com, com);
};
com operator+(com a, com b){
    com c(0, 0);
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
com operator-(com a, com b){
    com c(0, 0);
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}
int main(){
    com a(2, 5), b(3, 2);
    (a + b).disp();
    (a - b).disp();
    return 0;
}