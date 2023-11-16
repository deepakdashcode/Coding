#include<iostream>
using namespace std;

class abc{
    public:
    int x;
};
int main(){
    static abc a;
    cout << a.x << endl;
    return 0;
}