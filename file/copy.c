#include<stdio.h>
#include<string.h>
int main(){
    FILE *inp = fopen("fir.c", "r");
    FILE *out = fopen("sec.c", "w");
    while(!feof(inp)){
        fputc(fgetc(inp), out);
    }
    
    fclose(inp);
    fclose(out);
    return 0;
}