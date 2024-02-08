#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10000;
    vector<int> arr(n);
    //cout << "Enter the elements : ";
    for(int i = 0; i < n; i ++) {
        arr[i] = n - i;
    }
    
    int noOfSwaps;
    for(int i = 0; i < n - 1; i ++){
        noOfSwaps = 0;
        for(int j = 0; j < n - i - 1; j ++)
        {
            if(arr[j] > arr[j + 1]){
                noOfSwaps ++;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(!noOfSwaps) break;
    }
    for(int i: arr)
        cout << i << " ";
    cout << endl;
    return 0;
}