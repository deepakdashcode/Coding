#include<iostream>
using namespace std;
class nums{
    int x, y;
    public:
    nums(){
        x = 0, y = 0;
    }
    nums(int x, int y){
        this->x = x;
        this->y = y;
    }
    void disp(){
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
    friend nums operator*(nums, nums);
};
nums operator*(nums a, nums b){
    nums c;
    c.x = a.x * b.x;
    c.y = a.y * b.y;
    return c;
}

int main(){
    nums a(2, 3), b(3, 4);
    (a * b).disp();
    return 0;
}