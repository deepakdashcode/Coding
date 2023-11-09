#include<stdio.h>
#define MAXSIZE 6
void push1(int *arr, int data, int *size1, int *size2){
    if((*size1) + (*size2) == MAXSIZE)
    {
        printf("Stack is Full\n");
    }
    else{
        arr[(*size1)] = data;
        (*size1)++;
    }
}
void pop1(int *arr, int *size1){
    if((*size1) == 0) printf("Underflow Case\n");
    else{
        (*size1) --;
    }
}
void pop2(int *arr, int *size2){
    if((*size2) == 0) printf("Underflow Case\n");
    else{
        (*size2) --;
    }
}
void push2(int *arr, int data, int *size1, int *size2){
    if((*size1) + (*size2) == MAXSIZE)
    {
        printf("Stack is Full\n");
    }
    else{
        arr[MAXSIZE - (*size2) - 1] = data;
        (*size2)++;
    }
}
void print1(int *arr, int size1){
    for(int i = 0; i < size1; i ++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void print2(int *arr, int size2){
    for(int i = MAXSIZE - 1; i >= MAXSIZE - size2; i --){
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int main(){
    int size1 = 0, size2 = 0;
    int arr[MAXSIZE];
    push1(arr, 20, &size1, &size2);
    push1(arr, 30, &size1, &size2);
    push1(arr, 50, &size1, &size2);
    print1(arr, size1);
    push2(arr, 20, &size1, &size2);
    push2(arr, 40, &size1, &size2);
    push2(arr, 50, &size1, &size2);
    print2(arr, size2);
    push2(arr, 50, &size1, &size2);
    pop1(arr, &size1);
    push2(arr, 70, &size1, &size2);
    print2(arr, size2);    
    return 0;
}