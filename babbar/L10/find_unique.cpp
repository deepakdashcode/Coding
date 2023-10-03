#include<bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int size){
    int s = 0;
    for(int i = 0; i < size; i ++){
        s = s ^ arr[i];
    }
    return s;
}
int findDuplicate(vector<int> &arr, int n){
	int s = 0;
	for(int i = 1; i < n; i ++){
		s = s ^ i;
	}
	for(int i = 0; i < n; i ++){
		s = s ^ arr[i];
	}
	return s;
}

int main(){
    int arr[] = {1, 3, 5, 5, 3, 1, 4};
    vector<int> a{3,1,3,4,2};
    cout << findUnique(arr, 7) << endl;
    cout<< findDuplicate(a, 5);
    
}