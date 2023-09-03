#include<stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3];
    printf("Enter Elements of the matrix 1\n");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
            scanf("%d", &mat1[i][j]);
    }

    printf("Enter Elements of the matrix 2\n");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
            scanf("%d", &mat2[i][j]);
    }

    int equal = 1;
    for(int i = 0; i < 3; i ++) // row
    {
        for(int j = 0; j < 3; j ++) // column
        {
            if(mat1[i][j] != mat2[i][j])
            {
                equal = 0;
                break;
            }
        }
    }

    if(equal) printf("Yes they are equal\n");
    else printf("They are not equal\n");

}