#include <stdio.h>
#include <stdlib.h>
#include "question_5.h"

struct stack_type{
	Item value;
	struct stack_type *next;
};

struct stack_type *front = NULL;
struct stack_type *back = NULL;

PRIVATE void terminate(const char *message){
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

PUBLIC Stack create(Item value){
	Stack s = malloc(sizeof(struct stack_type));
	if(s == NULL){
		terminate("Error during creation!");
	}
	front = s;
	back = front;
	front->next = back;
	front->value = value;
	return s;
}

PUBLIC void insert(Stack s, Item i){
	struct stack_type *new_node = malloc(sizeof(struct stack_type));
	if(new_node == NULL){
		terminate("Error inserting.");
	}
	new_node -> next = NULL;
	new_node -> value = i;
	back->next = new_node;
	back = new_node;
}

PUBLIC void remove_item(Stack s){
	if(is_empty(s)){
		terminate("Stack is empty, can't remove!");
	} else{
		struct stack_type *temp;
		temp = front;
		front = front->next;
		free(temp);
	}
}

PUBLIC Item first_item(Stack s){
	return front->value;
}

PUBLIC Item last_item(Stack s){
	return back->value;
}

PUBLIC bool is_empty(Stack s){
	return s == NULL;
}