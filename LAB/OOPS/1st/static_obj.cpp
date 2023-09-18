#include<iostream>
using namespace std;
class Num{
    int a, b;
    public:
    void get(){
        cout << "Enter a and b : ";
        cin >> a >> b;
    }
    int sum(){return a + b;}
    int diff() {return a - b;}
    void disp(){
        get();
        cout << "Sum = " << sum() << endl;
        cout << "Diff = " << diff() << endl;
    }

};
int main(){
    static Num a;
    a.disp();
    return 0;
}
/*
Output
Enter a and b : 5 3
Sum = 8
Diff = 2
*/