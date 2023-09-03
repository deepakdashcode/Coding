/*
Enter n : 5 
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int d;
    for(int i = 1; i <= n; i ++)
    {
        if(i & 1) d = 1;
        else d = 0;
        for(int j = 1; j <= i; j ++)
        {
            cout << d << " ";
            d = d ^ 1;
        }
        cout << endl;
    }
    
    return 0;
}