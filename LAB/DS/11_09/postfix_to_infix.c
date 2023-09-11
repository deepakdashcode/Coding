#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool operand(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return true;
    } else {
        return false;
    }
}

char* getInfix(char* str) {
    char* stack[100];
    int top = -1;
    for (int j = 0; j < strlen(str); j++) {
        if (operand(str[j])) {
            char* operand = malloc(sizeof(char));
            *operand = str[j];
            stack[++top] = operand;
        } else {
            char* operator1 = stack[top--];
            char* operator2 = stack[top--];
            char* result = malloc(sizeof(char) * (strlen(operator2) + strlen(operator1) + 4));
            sprintf(result, "(%s%c%s)", operator2, str[j], operator1);
            stack[++top] = result;
        }
    }
    return stack[top];
}

int main() {
    char str[] = {'a', 'b', '*', 'c', '+', 'd', '*', 'e', '/'};
    printf("%s\n", getInfix(str));
    return 0;
}