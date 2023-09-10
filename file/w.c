#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr = fopen("w.txt", "a");
    char ch[100];
    scanf("%[^\n]s", ch);
    for(int i = 0; i < strlen(ch); i ++)
    {
        fputc(ch[i], ptr);
    }
    fclose(ptr);
    return 0;
}