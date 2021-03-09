#include "list.h"
#include <stdio.h>
#include <stdlib.h>

//Create a new list
void createList(node** head) {
    *head = NULL;
}
//Add to beginning of list
void addBegin(node** head, node* new_node) {
    new_node->next = *head;
    *head = new_node;
}
//Add to end of list
void addEnd(node** head, node* new_node) {
    while (*head) {
        if ((*head)->next == NULL) {
            (*head)->next = new_node;
            new_node->next = NULL;
        }

        *head = (*head)->next;
    }

}
//Remove from beginning of list and return removed element
node* removeBegin(node** head) {
    struct node* tmp = *head;
    *head = (*head)->next;

    return tmp;
}
//Remove from end of list and return removed element
node* removeEnd(node** head) {
    struct node* tmp;
    struct node* i;
    struct node* lag = NULL;
    for (i = *head; i != NULL; i = i->next) {
        if (i->next == NULL) {
            tmp = i;
            lag->next = NULL;
        }

        lag = i;
    }
    return tmp;
}

//Print list
void print(node* head) {
    while (head) {
        printf("Data in node: %d\n", head->data);
        head = head->next;
    }
}
//Find certain data in list and return data
int find(node** head, const int data) {
    while (*head) {
        if (data == (*head)->data)
            return (*head)->data;
        *head = (*head)->next;
    }
    return -1;
}

