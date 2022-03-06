/* 03/06/2022 */
/* Stack for chars */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "question_1.h"


struct stack_type{
	Item *contents;
	int top;
	int size;
};

void stack_empty(Stack s){
	s->top = 0;
}
bool is_empty(Stack s){
	return s->top == 0;
}
bool is_full(Stack s){
	return s->top == s->size; 
}

Stack create(int size){
	Stack s = malloc(sizeof(struct stack_type));
	s->contents = malloc(sizeof(size * sizeof(Item)));
	s->top = 0;
	s->size = size;
	return s;
}

void push(Stack s, char letter){
	if(is_full(s)){
		printf("Stacks full, try popping something.\n");
		return;
	}
	s->contents[s->top++] = letter;
	printf("Pushed %c onto the stack!\n", letter);
}

char pop(Stack s){
	if(is_empty(s)){
		printf("Stacks empty, try pushing something.\n");
		return ' ';
	}
	printf("Popping %c\n", s->contents[--s->top]);
	char popped = s->contents[s->top];
	s->contents[s->top] = ' ';
	return popped;
}

void nesting(Stack s){
	char c;
	printf("Enter parentheses and/or braces: ");
	getchar();
	while((c = getchar()) != '\n'){
		if(c == '{' || c == '('){
			push(s, c);
		} 
		else if(c == '}'){
				if(pop(s) != '{'){
					printf("Not properly nested.\n");
					stack_empty(s);
					return;
				}
		} 
		else if(c == ')'){
				if(pop(s) != '('){
					printf("Not properly nested.\n");
					stack_empty(s);
					return;
				}
		}

	} if(c == '\n'){
		if(is_empty(s)){
			printf("Properly nested. \n");
			stack_empty(s);
		} else{
			printf("Not properly nested \n");
			stack_empty(s);
		}
	}
}

void display(Stack s){
	for(int i = 0; i < s->top; i++){
		printf(" ======================\n");
		printf("||                    ||\n");
		printf("||         %c          ||\n", s->contents[i]);
		printf("||                    ||\n");
		printf(" ======================\n");
	}
}
