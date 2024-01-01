#include <stdlib.h>
#include <stdio.h>
typedef struct node {
    int num;
    struct node *next;
} Node;
void push(Node **stack, int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node->num = value;
    new_node->next = *stack;
    *stack = new_node;
}
void print_stack_reverse(Node *stack) {
    if (stack == NULL) {
        printf("0");
    } else {
        Node *reversed_stack = NULL;
        while (stack != NULL) {
            push(&reversed_stack, stack->num);
            stack = stack->next;
        }
        while (reversed_stack != NULL) {
            printf("%d ", reversed_stack->num);
            Node *temp = reversed_stack;
            reversed_stack = reversed_stack->next;
            free(temp);
        }
    }
}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    Node **stacks = malloc(n * sizeof(Node *));
    for (int i = 0; i < n; ++i) {
        stacks[i] = NULL;
        push(&stacks[i], i + 1);
    }
    while (m--) {
        int stack1, stack2;
        scanf("%d%d", &stack1, &stack2);
        if (stack1 != stack2) {
            Node *temp = stacks[stack1 - 1];
            stacks[stack1 - 1] = NULL;
            while (temp != NULL) {
                push(&stacks[stack2 - 1], temp->num);
                Node *next = temp->next;
                free(temp);
                temp = next;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        print_stack_reverse(stacks[i]);
        printf("\n");
    }
    for (int i = 0; i < n; ++i) {
        Node *temp;
        while (stacks[i] != NULL) {
            temp = stacks[i];
            stacks[i] = stacks[i]->next;
            free(temp);
        }
    }
    free(stacks);
    return 0;
}