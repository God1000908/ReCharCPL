//
// Created by zy337 on 2023/11/18.
//
#include <stdio.h>
#include <stdbool.h>
#define SIZE 100005
typedef struct {
    char str[SIZE];
    int top;
} Stack;
void ini(Stack *stack) {
    stack->top = -1;
}
void push(Stack *stack, char a) {
    if (stack->top < SIZE - 1) {
        stack->top++;
        stack->str[stack->top] = a;
    }
}
char pop(Stack *stack) {
    char a = '\0';
    if (stack->top >= 0) {
        a = stack->str[stack->top];
        stack->top--;
    }
    return a;
}
bool point(const char *str) {
    Stack stack;
    ini(&stack);
    for (int i = 0; str[i] != '\0'; i++) {
        char a = str[i];
        if (a == '(' || a == '[' || a == '{') {
            push(&stack, a);
        } else if (a == ')' || a == ']' || a == '}') {
            char b = pop(&stack);
            if ((a == ')' && b != '(') ||
                (a == ']' && b != '[') ||
                (a == '}' && b != '{')) {
                return false;
            }
        }
    }
    return stack.top == -1;
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char str[SIZE];
        scanf("%s", str);
        if (point(str)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}