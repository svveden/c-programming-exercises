#include <stdio.h>
#include <stdlib.h>
#include "exercise_3.h"

struct stack_type{
	Item contents[STACK_SIZE];
	int last_in;
	int first_in;
	int empty;
};

PRIVATE void terminate(const char *message){
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

PUBLIC Stack create(void){
	Stack s = malloc(sizeof(struct stack_type));
	if(s == NULL){
		terminate("Error during creation!");
	}
	s->last_in = 0;
	s->first_in = 0;
	s->empty = 0;
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