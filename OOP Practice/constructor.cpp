#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout << "Hello\n";
    }
    a(int d){
        cout << "Number is " << d << endl;
    }
};
int main()
{
    a sd;
    a s(10);
    return 0;
}