#include<stdio.h>
int main(){
    FILE *ptr = fopen("a.txt", "r");
    while(!feof(ptr)){
        char ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);
    return 0;
}