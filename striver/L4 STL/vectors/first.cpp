#include<bits/stdc++.h>
using namespace std;

void print(){
    cout << "DK" << endl;
}

int sum(int a, int b){
    return a + b;
}
void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << "  " << p.second << endl;
    pair<int, pair<int, int>> p1 = {9, {3, 4}};
    cout << p1.first << "  " << p1.second.first << "  " << p1.second.second << endl;
    pair<int, int> arr[3] = {{1, 2}, {4, 5}, {9, 4}};
    for(int i = 0; i < 3; i ++){
        cout << arr[i].first << "  " << arr[i].second << endl;
    }
}
void dispVector(vector<int> v){
    for(int i: v)
    {
        cout << i << "  ";
    }
    cout << endl;
}
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[1] << endl;

    vector<int> v1(7, 300);
    dispVector(v1);

    vector<int> v2(10);
    dispVector(v2);
    vector<int> v3  = {1, 3, 5, 6};
    dispVector(v3);

    vector<int>::iterator st = v3.begin();
    vector<int>::iterator end = v3.end(); // points to the adress next to the last element of the vector
    while(st != end){
        cout << *st << "  ";
        st ++;
    }
    cout << "\n";
    cout << "Last element = " << v3.back() << endl;

}
int main(){
    explainPair();
    //explainVector();

}