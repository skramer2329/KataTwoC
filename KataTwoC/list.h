#pragma once

typedef struct{
	int data; 
	node* next;
}node;
//Create a new list
void createList(node* *head);
//Add to beginning of list
void addBegin(node* *head, node new_node);
//Add to end of list
void addEnd(node* *head, node new_node);
//Remove from beginning of list and return removed element
node* removeBegin(node* *head);
//Remove from end of list and return removed element
node* removeEnd(node* *head);
//Print list
void print(node* head);
//Find certain data in list and return data
int find(node* *head, const int data);