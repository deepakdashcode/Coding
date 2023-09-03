#include<stdio.h>

void display(int arr[3][3])
{
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int mat[3][3];
    printf("Enter Elements of the matrix : ");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
            scanf("%d", &mat[i][j]);
    }

    int sum = 0;
    for(int i = 0; i < 3; i ++)
        sum = sum + mat[i][i];
    
    display(mat);
    printf("Sum of diagonal = %d\n", sum);
        
}