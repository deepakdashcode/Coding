#include<iostream>
using namespace std;
class sec;

class fir{
    int a;
    public:
    void get(){
        cout << "Enter a : ";
        cin >> a;
    }
    int getA(){return a;}
    friend void disp(fir, sec);
};
class sec{
    int b;
    public:
    void get(){
        cout << "Enter b : ";
        cin >> b;
    }
    int getB(){return b;}
    friend void disp(fir, sec);
};
void disp(fir f, sec s)
{
    cout << "Diff = " << f.getA() - s.getB() << endl;
}
int main(){
    fir a;
    sec b;
    a.get();
    b.get();
    disp(a, b);
    return 0;
}
/*
Output
Enter a : 7
Enter b : 6
Sum = 1
*/