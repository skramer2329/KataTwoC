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


	createList(&head);


	for (int i = 0; i < 10; i++) {
		node* new_node = (node*)malloc(sizeof(node));
		new_node->data = i;
		new_node->next = NULL;
		addBegin(&head, new_node);
	}
	//node* end_node = (node*)malloc(sizeof(node));
	//end_node->data = 1000;
	//addEnd(&head, end_node);
	

	print(head);
}