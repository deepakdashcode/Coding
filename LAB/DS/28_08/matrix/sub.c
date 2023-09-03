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
    int mat1[3][3], mat2[3][3], mat3[3][3];
    printf("Enter Elements of the matrix 1 : ");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
            scanf("%d", &mat1[i][j]);
    }

    printf("Enter Elements of the matrix 2 : ");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
            scanf("%d", &mat2[i][j]);
    }

    display(mat1);
    printf("\n\n");
    display(mat2);
    for(int i = 0; i < 3; i ++) // row
    {
        for(int j = 0; j < 3; j ++) // column
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("\n\n");
    display(mat3);
        
}