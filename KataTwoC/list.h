#pragma once

typedef struct{
	int data; 
	node* next;
}node;
//Create a new list
void createList(node* *head);
//Add to beginning of list
void addBegin(node* *head);
//Add to end of list
void addEnd(node* *head);
//Remove from beginning of list and return removed element
void removeBegin(node* *head);
//Remove from end of list and return removed element
void removeEnd(node* *head);
//Print list
void print(node* head);
//Find certain data in list and return data
void find(node* *head);