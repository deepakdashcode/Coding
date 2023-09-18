#include<iostream>
#include<math.h>
using namespace std;
class square{
    public:
    int side;
    void getSq()
    {
        cout << "Enter the side of the square : ";
        cin >> side;
    }
    void dispSq(){
        cout << "Area = " << side * side << endl;
    }
};
class Rectangle : virtual square{
    public:
    int l,b;
    void getrec()
    {
        cout << "Enter the length and breadth of rectangle : ";
        cin >> l >> b;
    }
    void dispRec(){
        cout << "Area = " << l * b << endl;
    }
};
class Circle : virtual square{
    public:
    int r;
    void getCir()
    {
        cout << "Enter the radius : ";
        cin >> r;
    }
    void dispCir(){
        cout << "Area = " << 3.14 * r * r << endl;
    }
};
class Triangle : public Rectangle, public Circle{
    public:
    int a, b, c;
    void getT()
    {
        cout << "Enter the sides of triangle : ";
        cin >> a >> b >> c;
    }
    void dispT(){
        float s = (a + b + c) / 2.0;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle = " << area << endl;
    }
};
int main(){
    square s;
    s.getSq();
    s.dispSq();
    Triangle t;
    t.getT();
    t.dispT();
    Circle c;
    c.getCir();
    c.dispCir();
    Rectangle r;
    r.getrec();
    r.dispRec();
    return 0;
}
/*
OUTPUT
Enter the side of the square : 3
Area = 9
Enter the sides of triangle : 4 5 3
Area of Triangle = 6
Enter the radius : 4
Area = 50.24
Enter the length and breadth of rectangle : 3 5
Area = 15
*/