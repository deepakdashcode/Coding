#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 4, 7, 5};
    vector<int> v1 = {22, 44};
    for(int i: v) cout << i << " ";cout << endl;
    v.insert(v.begin() + 2, 30);
    for(int i: v) cout << i << " ";cout << endl;
    v.insert(v.begin() + 2, 3, 10);
    for(int i: v) cout << i << " ";cout << endl;
    v.insert(v.begin() + 3, v1.begin(), v1.end());
    for(int i: v) cout << i << " ";cout << endl;
    return 0;
}