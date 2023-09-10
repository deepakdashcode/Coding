#include<stdio.h>
#include<string.h>
int main(){
    FILE *inp = fopen("inp.txt", "r");
    FILE *out = fopen("out.txt", "w");
    int a, b, s;
    fscanf(inp, "%d %d", &a, &b);
    s = a + b;
    fprintf(out, "Sum = %d\n", s);
    
    fclose(inp);
    fclose(out);
    return 0;
}