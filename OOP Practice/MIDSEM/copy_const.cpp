#include<iostream>
using namespace std;
static int ab = 10;
class Comp{
    public:
    int real, img;
    Comp(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    Comp(Comp &a){
        real = a.real;
        img = a.img;
        cout << "Copy Called\n";
    }
    friend Comp operator+(Comp, Comp);
    void disp(){
        cout << real << " +  i(" << img << ")\n";
    }
    Comp operator-(Comp b){
        Comp c(0, 0);
        c.real = real - b.real;
        c.img = img - b.img;
        return c; 
    }
};
Comp operator+(Comp a, Comp b){
    Comp c(0, 0);
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}
int main(){
    Comp a(3, 4);
    Comp* p = new Comp(5,2);
    Comp b = a;
    cout << b.real << "  " << b.img << endl;
    cout << p->real << "  " << p->img << endl;
    (a + a).disp();
    (a - a).disp();
    cout << ab << endl;
    return 0;
}