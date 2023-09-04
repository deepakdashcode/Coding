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
int precedence(char c1, char c2)
{
    // 0  if same
    // 1  if c1 > c2
    // -1 if c1 < c2
    if(isStart(c1)) return 2;
    if(c1 == '*' || c1 == '/' || c1 == '%')
    {
        if(c2 == '*' || c2 == '/' || c2 == '%') return 0;
        else return 1;
    }
    if(c1 == '+' || c1 == '-')
    {
        if(c2 == '+' || c2 == '-') return 0;
        return -1;
    }
}
int isOp(char ch)
{
    if(ch == '*' || ch == '/' || ch == '%' || ch == '+' || ch == '-') return 1;
    return 0;
}
int main()
{
    char inp[100];
    printf("Enter the Expression : ");
    scanf("%s", inp);
    int len = strlen(inp);
    char stack[100];
    int size = 0;
    char exp[100];
    int e_size = 0;
    for(int i = 0; i < len; i ++)
    {
        char ch = inp[i];
        if(isStart(ch))
            push(stack, &size, ch);
        else if(isEnd(ch))
        {
            while(!isStart(top(stack, size)))
            {
                push(exp, &e_size, pop(stack, &size));
            }
            pop(stack, &size);
        }
        else if(!isOp(ch))
            push(exp, &e_size, ch);
        else
        {
            if(precedence(top(stack, size), ch) <= 0) push(stack, &size, ch);
            else if(precedence(top(stack, size), ch) > 0) {

                while(precedence(top(stack, size), ch) > 0 || isStart(ch))
                {
                    push(exp, &e_size, pop(stack, &size));
                    
                    if(isStart(top(stack, size))){
                        pop(stack, &size);
                        break;
                    };
                }
                push(stack, &size, ch);
            }
        }
    }

    while(size != 0)
    {
        push(exp, &e_size, pop(stack, &size));
    }

    display(exp, e_size);
    
}