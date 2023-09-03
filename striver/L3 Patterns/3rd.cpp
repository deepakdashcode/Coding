/*
Enter n : 5
1                 1 
2 2             2 2 
3 3 3         3 3 3 
4 4 4 4     4 4 4 4 
5 5 5 5 5 5 5 5 5 5 
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
        for(int j = 1; j <= i; j ++)
            cout << i << " ";

        for(int sp = 1; sp <= (n - i) * 2; sp ++)
            cout << "  ";

        for(int j = i; j >= 1; j --)
            cout << i << " ";

        cout << endl;
    }
    
    return 0;
}