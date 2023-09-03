
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    for(int i = n; i >= 1; i --)
    {
        for(int j = 1; j <= i; j ++)
            cout << "* ";
        for(int sp = 1; sp <= (n - i) * 2; sp ++)
            cout << "  ";
        for(int j = 1; j <= i; j ++)
            cout << "* ";
        cout << endl;
    }
     for(int i = 2; i <= n; i ++)
    {
        for(int j = 1; j <= i; j ++)
            cout << "* ";
        for(int sp = 1; sp <= (n - i) * 2; sp ++)
            cout << "  ";
        for(int j = 1; j <= i; j ++)
            cout << "* ";
        cout << endl;
    }   
    return 0;
}