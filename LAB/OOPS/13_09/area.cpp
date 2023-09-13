#include<iostream>
#include<math.h>
using namespace std;
class Area{
    public:
    Area(int side){
        cout << "Area of Square = " << side * side << endl;
    }
    Area(int l, int b){
        cout << "Area of rectangle = " << l * b << endl;
    }
    Area(int a, int b, int c)
    {
        float s = (a + b + c) / 2.0;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle = " << area << endl;
    }
};
int main(){
    Area a(3);
    Area(2, 5);
    Area(3, 4, 5);
    return 0;
}
/*
OUTPUT
Area of Square = 9
Area of rectangle = 10
Area of Triangle = 6
*/