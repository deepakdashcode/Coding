#include<iostream>
using namespace std;
class comp{
    int real, imag;
    public:
    comp(int r, int i){
        real = r;
        imag = i;
    }  
    comp operator*(comp b){
        comp ans(0, 0);
        ans.real = real*b.real - imag*b.imag;
        ans.imag = real*b.imag + imag*b.real;
        cout << "* executed\n";
        return ans;
    }
    comp operator-(comp b){
        comp ans(0, 0);
        ans.real = real - b.real;
        ans.imag = imag - b.imag;
        cout << "- executed\n";
        return ans;
    }
    void disp(){
        cout << real  << " + i (" << imag << ")" << endl;
    }
};
int main(){
    comp a(3,2), b(3, 5), c(4, 2);
    comp d = a * b - c;
    d.disp();
    comp e = a * b;
    e.disp();
    comp f = e - c;
    f.disp();
    return 0;
}