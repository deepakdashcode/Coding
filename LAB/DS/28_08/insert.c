#include<stdio.h>

void insert(int pos, int element, int arr[], int *size)
{
    for(int i = (*size); i > pos; i --)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*size) ++;
}

void display(int arr[], int size)
{
    for(int i = 0; i < size; i ++)
        printf("%d  ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[101] = {0};
    int size;
    printf("Enter size : (0 to 99) : ");
    scanf("%d", &size);
    printf("Enter the elements\n");
    for(int i = 0; i < size; i ++)
        scanf("%d", &arr[i]);
    
    printf("Current Array\n");
    display(arr, size);

    int element, pos;
    printf("Enter the element and index : ");
    scanf("%d %d", &element, &pos);
    insert(pos, element, arr, &size);
    printf("Final Array\n");
    display(arr, size);

    return 0;
}