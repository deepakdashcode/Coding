#include<bits/stdc++.h>
using namespace std;

int partition(int* arr, int l, int r){
    int piv = arr[l];
    int i = l;
    while(l < r){
        while(arr[l] <= piv)
            l++;
        
        while(arr[r] > piv)
            r--;
        
        if(l < r) swap(arr[l++], arr[r--]);
    }
    swap(arr[i], arr[r]);
    return r;
}
void quick_sort(int* arr, int l, int r){
    if(l < r){
        int part = partition(arr, l, r);
        quick_sort(arr, l, part - 1);
        quick_sort(arr, part + 1, r);
    }
}
int main(){
    int arr[] = {3, 2, 1, 4, 5, 7, 2, 9, 8, 4};
    quick_sort(arr, 0, 9);
    for(int i = 0; i < 10; i ++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}