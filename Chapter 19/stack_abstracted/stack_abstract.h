#ifndef STACK_H
#define STACK_H

#include <stdbool.h> /* C99 only */

typedef struct{
	int contents[STACK_SIZE];
	int top;
} Stack;

void make_empty(Stack *s);
void is_empty(Stack *s);
void is_full(Stack *s);
void push(Stack *s,int i);
int pop(Stack *s);

#endif