#include<stdio.h>
#define MAXSIZE 5
void push1(int* arr, int data, int* size1, int* size2){
    if((*size1) + (*size2) >= MAXSIZE)
    {
        printf("Stack Full\n");
        return;
    }
    arr[(*size1)++] = data;
}
void pop1(int* arr, int* size1, int* size2){
    if((*size1) == 0){
        printf("Underflow\n");
        return;
    }
    (*size1)--;
    printf("Popped %d\n", arr[(*size1)]);
}
void push2(int* arr, int data, int* size1, int* size2){
    if((*size1) + (*size2) >= MAXSIZE)
    {
        printf("Stack Full\n");
        return;
    }
    arr[MAXSIZE - 1 - (*size2++)] = data;
}
void pop2(int* arr, int* size1, int* size2){
    if((*size2) == 0){
        printf("Underflow\n");
        return;
    }
    
    printf("Popped %d\n", arr[MAXSIZE - (*size2)--]);
}

int main(){
    int size1 = 0, size2 = 0;
    int arr[MAXSIZE];
    push1(arr, 10, &size1, &size2);
    
}