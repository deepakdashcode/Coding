#include<bits/stdc++.h>
using namespace std;
int binSearch(int* arr, int l, int r, int key){
    while(l <= r){
        int mid = l + (r - l)/ 2;
        cout << "arr[mid] = " << arr[mid] << endl;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main(){
    int arr[] = {1, 3, 7, 9, 11, 14, 18, 20};
    cout << "Enter key : ";
    int k;
    cin >> k;
    int ind = binSearch(arr, 0, 7, k);
    if(ind != -1)
        cout << "Index : " << ind << endl;
    else
        cout << "Element not found\n";
    return 0;
}