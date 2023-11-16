#include<iostream>
using namespace std;
#define c cout
class abc{
    public:
     void disp();
};
inline void abc::disp(){
    cout << "Displayed\n";
}
int main()
{
    abc a;
    a.disp();
    c<<"hii\n";
    return 0;
}