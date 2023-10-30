#include<stdio.h>
#include<stdlib.h>
#define row 9
#define col 6
int main(){
    int arr[row][col];
    int zero = 0, nonZero = 0;
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j ++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0) zero++;
            else nonZero++;
        }
    }
    printf("\n-------Matrix-------\n");
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j ++)
            printf("%d  ", arr[i][j]);
        printf("\n");
    }
    if(zero > nonZero){
        printf("Sparse Matrix\n");
        int sparse[nonZero][3];
        int k = 0; // represent the kth row of arr
        for(int i = 0; i < row; i ++){
            for(int j = 0; j < col; j ++){
                if(arr[i][j] != 0){
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = arr[i][j];
                    k++;
                }
            }
        }
        for(int i = 0; i < nonZero; i++){
            for(int j = 0; j < 3; j ++){
                printf("%d  ", sparse[i][j]);
            }
            printf("\n");
        }
        
    }
    else{
        printf("Not a sparse Matrix\n");
    }

    return 0;
}