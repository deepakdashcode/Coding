#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> v;

    v.emplace_back(100, 'c');
    // 1. Reserve space for a new string
    // 2. placement new() into new space (args ...)

    v.push_back(string(100, 'c'));
    // 1. Create a temporary string on the stack(100, 'c')
    // 2. Resize the vector
    // 3. move(temp) to new location

    v. emplace_back(string(100, 'c')); // Works but is the wrong way of doing things
    // 0. create temp string on stack
    // 1. Reserve space for a new string
    // 2. placement new() into new space (args ...) (move constructor)

    cout << v[0].size()  << endl;
    cout << v[1].size()  << endl;

}