#include<stdio.h>
#define MAX_SIZE 5

void push(int element, int arr[], int *size)
{
    if((*size) == MAX_SIZE)
    {
        printf("Stack Is Full\nn");
    }
    else{
    arr[*size] = element;
    (*size) ++; 
    }
}

void pop(int arr[], int *size)
{
    if((*size) == 0) {
        printf("Stack is already empty\n");
    }
    else{
        (*size) --;
        printf("Element Popped is = %d\n", arr[*size]);
    }
}
int isEmpty(int size)
{
    if(size == 0) return 1;
    return 0; 
}
int isFull(int size)
{
    if(size == MAX_SIZE) return 1;
    return 0;
}
void display(int arr[], int size)
{
    for(int i = size - 1; i >= 0; i --)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n\n");
}
void top(int arr[], int size)
{
    printf("Top Element is %d", arr[size - 1]);
}
int main()
{
    int arr[MAX_SIZE] = {0};
    int size = 0;
    push(10, arr, &size);
    display(arr, size);
    push(45, arr, &size);
    display(arr, size);
    push(35, arr, &size);
    display(arr, size);

    pop(arr, &size);
    display(arr, size);
    top(arr, size);

 
}