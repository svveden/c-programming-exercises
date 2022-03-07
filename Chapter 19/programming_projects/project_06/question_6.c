#include <stdio.h>
#include <stdlib.h>
#include "question_6.h"

struct stack_type{
	Item *contents;
	int last_in;
	int first_in;
	int empty;
	int size;
};

PRIVATE void terminate(const char *message){
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

PUBLIC Stack create(int size){
	Stack s = malloc(sizeof(struct stack_type));
	if(s == NULL){
		terminate("Error during creation!");
	}
	s->contents = malloc(sizeof(Item) * size);
	if(s->contents == NULL){
		terminate("Error during creation of array!");
	}
	s->last_in = 0;
	s->first_in = 0;
	s->empty = 0;
	s->size = size;
	return s;
}

PUBLIC void insert(Stack s, Item i){
	while(s->empty < STACK_SIZE-1){
		s->contents[s->empty++] = i;
		s->last_in = s->empty-1;
		return;
	}
	s->last_in = 0;
	s->empty = 0;
	s->contents[s->empty++] = i;
	s->first_in++;
}

PUBLIC void remove_item(Stack s){
	if(!is_empty(s)){
		if(s->first_in != STACK_SIZE){
			s->contents[s->first_in++] = 0;
		} else{
			s->first_in = 0;
			s->contents[s->first_in++] = 0;
		}
	}
	else{
		terminate("Stack is empty, can't remove!");
	}
}

PUBLIC Item first_item(Stack s){
	return s->contents[s->first_in];
}

PUBLIC Item last_item(Stack s){
	return s->contents[s->last_in];
}

PUBLIC bool is_empty(Stack s){
	return s->contents[s->first_in] == 0;
}