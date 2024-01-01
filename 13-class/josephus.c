//
// Created by zy337 on 2023/12/29.
//
#include "ll\ll.h"
#define NUM 12

void sit_around_circle(linked_list *list, int num);
void kill_until_one(linked_list *list);
int get_survivor(const linked_list *list);

int main()
{
    printf("I hate the Josephus games!\n");
    linked_list list;
    Init(&list);
    sit_around_circle(&list, NUM);
    Print(&list);
    kill_until_one(&list);
    int survivor = get_survivor(&list);
    printf("%d : %d\n", NUM, survivor);
    Free(&list);
    return 0;
}
void sit_around_circle(linked_list *list, int num){
    for(int i = 1; i <= num; i ++){
        Append(list, i);
    }
}
void kill_until_one(linked_list *list){
    Node *node = list->head;
    while(!is_singleton(list)){
        Delete(list, node);
        node = node->next;
    }
}
int get_survivor(const linked_list *list){
    return get_head_val(list);
}