#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
char pop(char arr[], int *size){
    if((*size) != 0)
        (*size) --;
    
    return arr[*size];
}
int isStart(char ch)
{
    if(ch == '(' || ch == '{' || ch == '[') return 1;
    return 0;
}
int isEnd(char ch)
{
    if(ch == ')' || ch == '}' || ch == ']') return 1;
    return 0;
}
int match(char c1, char c2)
{
    if(c1 == '(' && c2 == ')') return 1;
    if(c1 == '{' && c2 == '}') return 1;
    if(c1 == '[' && c2 == ']') return 1;
    return 0;
}
void push(char arr[], int *size, char element)
{
    arr[*size] = element;
    (*size) ++;
}
void display(char arr[], int size)
{
    for(int i = 0; i < size; i ++)
        printf("%c  ", arr[i]);
    printf("\n");
}
char top(char stack[], int size)
{
    return stack[size - 1];
}
int main()
{
    char inp[100];
    printf("Enter the parenthesis : ");
    scanf("%s", inp);
    int len = strlen(inp);
    char stack[100];
    int size = 0;
    int valid = 1;
    for(int i = 0; i < len; i ++)
    {
        char ch = inp[i];
        if(isStart(ch))
            push(stack, &size, ch);
        else if(isEnd(ch))
        {
            char t = pop(stack, &size);
            if(!match(t, ch))
            {
                valid = 0;
                break;
            }
            
        }
    }
    if(valid && size == 0) printf("Valid\n");
    else printf("Invalid\n");
}