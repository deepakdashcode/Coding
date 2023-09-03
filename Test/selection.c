#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *inp = fopen("inp.txt", "r");
    FILE *out = fopen("out.txt", "w");
    int n;
    fscanf(inp, "%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i ++)
    {
        fscanf(inp, "%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i ++)
    {
        int ind = i;
        for(int j = i + 1; j < n; j ++)
        {
            if(arr[j] < arr[ind])
            {
                ind = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[ind];
        arr[ind] = temp;
    }

    for(int i = 0; i < n; i ++)
    {
        fprintf(out, "%d  ", arr[i]);
    }

}