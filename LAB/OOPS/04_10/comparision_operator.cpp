#include<iostream>
#include<math.h>
// In this assumption if magnitude is greater
// then complex number is greater
// In reality this is not the case
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
    bool operator<(com b){
        float mag1 = sqrt(real*real + imag*imag);
        float mag2 = sqrt(b.real*b.real + b.imag*b.imag);
        if(mag1<mag2) return 1;
        return 0; 
    }
        bool operator<=(com b){
        float mag1 = sqrt(real*real + imag*imag);
        float mag2 = sqrt(b.real*b.real + b.imag*b.imag);
        if(mag1<=mag2) return 1;
        return 0; 
    }
};
int main(){
    com a(2, 5), b(3, 2), c(2, 3);
    cout << (a < b) << endl;
    cout << (b < c) << endl;
    cout << (b <= c) << endl;   
    return 0;
}