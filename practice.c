
#include<stdio.h>
#include<stdlib.h>


struct list{
    int count;
    struct node *link;
}head;

struct node *createnode(int value){
    struct node *new =(struct node *)malloc(sizeof(struct node));

    if (new == NULL){
        printf("allocation failed.");
        return;
    }
    new->data = value;
    new->link = NULL;
    return new;
}

void appendnode(struct list *l,int value){
    struct node *n = createnode(value);
    struct node *current = l->head;
    while (current->link != NULL){
        current = current->link;
    }
    current->link = n;
    l->count++;
}

int main(){
    struct list mylist;
    initializelist(&mylist);
    appendnode(&mylist,20);
    appendnode(&mylist,30);
    display(&mylist);
    return 0;
}