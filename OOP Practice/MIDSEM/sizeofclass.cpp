#include<iostream>
using namespace std;
class a{
    public:
    static int ab;
};
void disp(){
    static int x = 5;
    cout << x ++ << endl;
}
int a::ab = 5;
int main(){
    cout << a::ab << endl;
    for(int i = 0; i < 10; i ++){
        disp();
    }
    return 0;
}