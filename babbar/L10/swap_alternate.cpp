#include<iostream>
using namespace std;
void swapAlter(int *arr, int size)
{
    for(int i = 0; i < size; i += 2)
    {
        if(i!=size-1)
            swap(arr[i], arr[i + 1]);
    }
}
void disp(int *arr, int size){
    for(int i = 0; i < size; i ++)
        cout << arr[i] << "  ";
    cout << endl;
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 2};
    swapAlter(arr, 5);
    disp(arr, 5);
    return 0;
}