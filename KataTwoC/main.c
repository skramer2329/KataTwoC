#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int args, char* argv[]) {
	//This is to test methods in list.c

	//Methods to test:
		//create list
		//add begin
		//add end
		//remove begin
		//remove end
		//print
		//find

	node* head = (node*)malloc(sizeof(node));
	head->data = 1;
	
	createList(head);

	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = 5;

	addBegin(&head, new_node);

	print(&head);
}