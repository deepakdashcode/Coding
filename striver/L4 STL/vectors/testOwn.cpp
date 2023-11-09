#include<bits/stdc++.h>
using namespace std;
template <class T>
void traverse(vector<T> &v){
    cout << "[";
    for(T t:v) // For each loop
        cout << t << " ";   
    cout << "]\n";
}
int main()
{
    vector<int> v = {2, 8, 9, 4, 2, 0, 1};
    vector<int>::iterator it = v.begin();
    it ++;
    cout << *it << endl;
    traverse(v);
    return 0;
}