#include<iostream>
using namespace std;
class first{
    static int x;
    public:
    static void disp()
    {
        x ++;
        cout << "X = " << x << endl;
    }
};
int first::x = 0;
int main(){
    first a, b;
    a.disp();
    a.disp();
    b.disp();
    return 0;
}
/*
Output
X = 1
X = 2
X = 3
*/