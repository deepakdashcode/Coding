#include<stdio.h>
int main()
{
    int arr[101];
    int t_size, o_size, e_size;
    printf("Enter total size (0 to 100) : ");
    scanf("%d", &t_size);
    int odd[101];
    int even[101];
    printf("Enter the elements \n");
    for(int i = 0; i < t_size; i ++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even[e_size ++] = arr[i];
        else
            odd[o_size ++] = arr[i];
    }
    printf("Even\n");
    for(int i = 0; i < e_size; i ++)
        printf("%d  ", even[i]);
    printf("\nOdd\n");
    for(int i = 0; i < o_size; i ++)
        printf("%d  ", odd[i]);
    printf("\n");
    
    return 0;
}
