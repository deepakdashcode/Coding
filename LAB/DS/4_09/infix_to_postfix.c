#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
char pop(char arr[], int *size){
    if((*size) != 0)
        (*size) --;
    return arr[*size];
}
int precedence(char ch)
{
    if(ch == '(') return -1;
    if(ch == '/' || ch == '*' || ch == '%') return 2;
    if(ch == '+' || ch == '-') return 1;
}
void push(char arr[], int *size, char element)
{
    arr[*size] = element;
    (*size) ++;
}
char top(char stack[], int size)
{
    return stack[size - 1];
}
int isOp(char ch)
{
    if(ch == '*' || ch == '/' || ch == '%' || ch == '+' || ch == '-') return 1;
    return 0;
}
void disp(char arr[], int size)
{
    for(int i = 0; i < size; i ++)
    {
        printf("%c ",arr[i]);
    }
    printf("\n");
}
int main()
{
    char exp[MAX_SIZE];
    char stack[MAX_SIZE];
    int stackSize = 0;
    char ans[MAX_SIZE]; // to store infix to postfix
    int ansSize = 0;
    printf("Enter the expression inside () : ");
    scanf("%s", exp);
    int length = strlen(exp);
    for(int i = 0; i < length; i ++)
    {
        char ch = exp[i];
        if(!isOp(ch) && ch != '(' && ch != ')') // if operand then push to ans
            push(ans, &ansSize, ch);
        else
        {
            if(ch == '(' || stackSize == 0) // if stack empty or starting bracket then push to stack
                push(stack, &stackSize, ch);
            else{
                if(ch != ')')
                {   char topElement = top(stack, stackSize);
                    if(precedence(topElement) < precedence(ch))
                    push(stack, &stackSize, ch);
                    else{
                        // 
                        while(top(stack, stackSize) != '(' && precedence(top(stack, stackSize)) >= precedence(ch) ){
                            push(ans,&ansSize, pop(stack, &stackSize));
                        }
                        push(stack,&stackSize, ch);

                    }
                }
                else{
                    while(top(stack, stackSize) != '(')
                    {
                        push(ans, &ansSize, pop(stack, &stackSize));
                    }
                    pop(stack, &stackSize);
                    // what if it's a closing bracket
                }
            }
        }
    }   
    printf("Postfix expression : ");
    disp(ans, ansSize);
    stackSize = 0; // To Reset the stack
    char sol[MAX_SIZE]; // To evaluate the expression
    int solSize = 0;
    for(int i = 0; i < ansSize; i ++)
    {
        char ch = ans[i];
        if(!isOp(ch))
            push(sol, &solSize, ch);
        else{
            int ch1 = pop(sol, &solSize) - '0';
            int ch2 = pop(sol, &solSize) - '0';
            int temp = 0;
            switch(ch)
            {
                case '+' : temp = ch2 + ch1; break;
                case '-' : temp = ch2 - ch1; break;
                case '*' : temp = ch2 * ch1; break;
                case '/' : temp = ch2 / ch1; break;
            }
            push(sol, &solSize, temp + '0');
        }
    }
printf("Solution = %c", sol[0]); 
}
/*
Output
Enter the expression inside () : (2+3/5+2*4-6)
Postfix expression : 2 3 5 / + 2 4 * + 6 -
Solution = 4
*/