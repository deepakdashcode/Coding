#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 4, 7, 5};
    v.erase(v.begin() + 1, v.end() - 1);
    for(int i: v) cout << i << " ";cout << endl;
    v.erase(v.begin());
    for(int i: v) cout << i << " ";cout << endl;
   
    return 0;
}