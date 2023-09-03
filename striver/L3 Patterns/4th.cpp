/*
Enter n : 5
        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    for(int i = 1; i <= n; i ++)
    {
        for(int sp = 1; sp <= n - i; sp ++)
            cout << "  ";
        for(char j = 'A'; j <= 'A' + i - 1; j ++)
            cout << j << " ";
        for(char j = 'A' + i - 2; j >= 'A'; j --)
            cout << j << " ";

        cout << endl;
    }
    
    return 0;
}