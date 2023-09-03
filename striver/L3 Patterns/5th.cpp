
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    for(int i = 1; i <= n; i ++)
    {
        for(int sp = 1; sp <= n; sp ++)
            cout << "  ";
        for(int j = 1; j <= i; j ++)
            cout << "* ";
        cout << endl;
    }
    for(int i = n; i >= 1; i --)
    {
        for(int sp = 1; sp <= n - i; sp ++)
            cout << "  ";
        for(int j = 1; j <= i; j ++)
            cout << "* ";
        
        cout << endl;
    }
    
    return 0;
}