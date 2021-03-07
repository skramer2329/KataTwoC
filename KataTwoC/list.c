#include "list.h"
#include <stdio.h>
#include <stdlib.h>

//Create a new list
void createList(node** head) {
	*head = NULL;
}
//Add to beginning of list
void addBegin(node** head, node* new_node) {
	
}
//Add to end of list
void addEnd(node** head, node* new_node) {

}
//Remove from beginning of list and return removed element
node* removeBegin(node** head) {
	node* tmp = head;
	head = (*head)->next;

	return tmp;
}
//Remove from end of list and return removed element
node* removeEnd(node** head) {

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
	while (head) {
		if (data == (*head)->data)
			return (*head)->data;
		head = (*head)->next;
	}
	return NULL;
}

