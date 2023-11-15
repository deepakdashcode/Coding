#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n = 4;
    char** arr = (char**)malloc(sizeof(char*) * n);
    for(int i = 0 ; i < n; i ++)
    {
        arr[i] = (char*)malloc(sizeof(char) * 100);
        char name[100];
        printf("Enter name of Student   %d : ", (i + 1));
        scanf("%s", name);
        strcpy(arr[i], name);
    }
    for(int i = 0; i < n - 1; i ++)
    {
        for(int j = 0; j < n - i - 1; j ++)
        {
            if(strcmp(arr[j], arr[j + 1]) > 0)
            {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    

}