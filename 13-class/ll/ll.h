//
// Created by zy337 on 2023/12/29.
//

// macro (宏)
// header guard
#ifndef RECHARCPL_LL_H
#define RECHARCPL_LL_H

// TODO: adding code here

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// (1) define data type: circular singly link list
typedef struct node {
    int val;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
    Node *tail;
} linked_list;

// (2) function on linked list (declaration)
void Init(linked_list *list);
void Free(linked_list *list);
bool is_empty(const linked_list *list);
bool is_singleton(const linked_list *list);
int get_head_val(const linked_list *list);
void Print(const linked_list *list);
void Append(linked_list *list, int val);
void Delete(linked_list *list, Node *prev);
void Insert(linked_list *list, Node *prev, int val);
Node *Search(linked_list *list, int val);
#endif //RECHARCPL_LL_H
