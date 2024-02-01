#include<iostream>
using namespace std;
#define size 5
class sec;
class third;
class fir{
    public:
    int arr[size];
    friend void sum(fir&, sec&, third&);
};
class sec{
    public:
    int arr[size];
    friend void sum(fir&, sec&, third&);
};
class third{
    public:
    int arr[size];
    friend void sum(fir&, sec&, third&);
};
void sum(fir &f, sec &s, third &t){
    for(int i = 0; i < size; i ++)
        t.arr[i] = f.arr[i] + s.arr[i];
}
int main(){
    fir f;sec s;third t;
    cout << "Enter elements of fir\n";
    for(int i = 0; i < size; i ++)
        cin >> f.arr[i];
    cout << "Enter elements of sec\n";
    for(int i = 0; i < size; i ++)
        cin >> s.arr[i];
    cout << "Elements of third\n";
    sum(f, s, t);
    for(int i = 0; i < size; i ++)
        cout << t.arr[i] << endl;
    return 0;
}