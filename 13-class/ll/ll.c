//
// Created by zy337 on 2023/12/29.
//

#include "ll.h"

// TODO: functions on linked list (implementations)

void Init(linked_list *list){
    list->head = NULL;
    list->tail = NULL;
}
void Free(linked_list *list){
    while(!is_empty(list)){
        Delete(list, list->head);
    }
}
bool is_empty(const linked_list *list){
    return list->head == NULL;
}
bool is_singleton(const linked_list *list){
    return !is_empty(list) && (list->head == list->tail);
}
int get_head_val(const linked_list *list){
    if (is_empty(list)) return -1;
    return list->head->val;
}
void Print(const linked_list *list){
    if (is_empty(list))  return;
    Node *node = list->head;
    do{
        printf("%d ", node->val);
        node = node->next;
    }while(node != list->head);
    printf("\n");
}
void Append(linked_list *list, int val){
    Node *node = malloc(sizeof *node);
    if (node == NULL)   return;
    node->val = val;
    if (is_empty(list))
        list->head = node;
    else
        list->tail->next = node;
    list->tail = node;
    list->tail->next = list->head;
}
void Delete(linked_list *list, Node *prev){
    if (is_empty(list)) return;
    if (is_singleton(list)){
        free(list->head);
        Init(list);
        return;
    }
    Node *cur = prev->next;
    Node *next = cur->next;
    prev->next = next;
    if (cur == list->head)
        list->head = next;
    if (cur == list->tail)
        list->tail = prev;
    free(cur);
}