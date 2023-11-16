#include<iostream>
using namespace std;
struct abc{
    public:
    int x;
    private:
    int a;
};
int main(){
    int sum(int, int);
    cout << sum(3, 8);
    struct abc a;
    a.x = 5;
    cout << a.x;
    return 0;
}

inline int sum(int a, int b)
{
 

    return a + b;
}