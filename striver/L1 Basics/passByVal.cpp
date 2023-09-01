#include<bits/stdc++.h>
using namespace std;
void change(int arr[])
{
    arr[0] = 10;
}
void change(string s)
{
    s[0] = 'S';
    cout << s << endl;
}
void test(string &s)
{
    s[0] = 'S';
    cout << s << endl;
}
int main()
{
    int arr[] = {1, 4, 5, 5, 3};
    change(arr);
    cout << arr[0] << endl;
    string s = "Ram";
    change(s);
    cout << s << endl;
    test(s);
    cout << s << endl;
    return 0;
}