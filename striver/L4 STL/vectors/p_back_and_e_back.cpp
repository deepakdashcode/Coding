#include<iostream>
#include<vector>
using namespace std;
class Point{
    public:
    float x, y;
    Point(){
        cout << "Default Constructor\n";
        x = 0;
        y = 0;
    }
    Point(float x){
        cout << "First Constructor Called\n";
        this->x = x;
        y = 0;  
    }
    Point(float x, float y)
    {
        cout << "Second Constructor Called\n";
        this->x = x;
        this->y = y;
    }
    Point(const Point &p)
    {
        cout << "Copy Constructor Called\n";
        x = p.x;
        y = p.y;
    }
};

using namespace std;
int main(){
    vector<Point> v1;
    v1.push_back(Point(10));
    v1.push_back(Point(20));
    v1.push_back(Point(20));
    v1.push_back(Point(10));
    v1.push_back(Point(20));
    v1.push_back(Point(20));
    cout << "\nSecond Vector\n\n";
    vector<Point> v2;
    v2.emplace_back(10);
    v2.emplace_back(20, 30);
    v2.emplace_back();
    v2.emplace_back(10);
    v2.emplace_back(20, 30);
    v2.emplace_back();
}