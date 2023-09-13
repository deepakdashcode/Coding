#include<iostream>
using namespace std;
class first{
    static int x;
    public:
    void disp()
    {
        x += 10;
        cout << "X = " << x << endl;
    }
};
int first::x = 5;
int main(){
    first a, b;
    a.disp();
    a.disp();
    b.disp();
    return 0;
}
/*
Output
X = 15
X = 25
X = 35
*/