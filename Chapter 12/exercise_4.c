/* 02/18/2022 */
/* Stack using pointers */

#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top_pointer = &contents[0];

void make_empty(void){
	top_pointer = &contents[0];
}

bool is_empty(void){
	return top_pointer == &contents[0];
}

bool is_full(void){
	return top_pointer == &contents[STACK_SIZE - 1];
}

void push(int i){
	if(is_full()){
		stack_overflow();
	}else{
		*top_pointer++ = i;
	}
}

int pop(void){
	if(is_empty()){
		stack_underflow();
	} else{
		return *--top_pointer;
	}
}
