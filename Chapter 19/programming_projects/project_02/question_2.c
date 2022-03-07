/* 02/16/2022 */
/* Stack for RPN */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "question_2.h"

struct stack_type{
	Item *contents;
	int top;
	int size;
};

Stack create(int size){
	Stack s = malloc(sizeof(struct stack_type));
	s->contents = malloc(sizeof(Item) * size);
	s->top = 0;
	s->size = size;
	return s;
}

void stack_empty(Stack s){
	s->top = 0;
}
bool is_empty(Stack s){
	return s->top == 0;
}
bool is_full(Stack s){
	return s->top == STACK_SIZE; 
}

void push(Stack s, int letter){
	if(is_full(s)){
		printf("Stacks full, try popping something.\n");
		exit(0);
	}
	s->contents[s->top++] = letter;
	printf("Pushed %d onto the stack!\n", letter);
}

int pop(Stack s){
	if(is_empty(s)){
		printf("Stacks empty, try pushing something.\n");
		exit(0);
		return 0;
	}
	printf("Popping %d\n", s->contents[--s->top]);
	int popped = s->contents[s->top];
	s->contents[s->top] = 0;
	return popped;
}

void rpn(Stack s){
	char c;
	int a, b, ans, conv = 0;
	printf("Enter an RPN expression: ");
	getchar();
	while((c = getchar()) != '\n'){
		conv = c - '0';

		if(conv > 0 && conv < 10){
			push(s, conv);
		} else if(c == '+') {
			a = pop(s);
			b = pop(s);
			ans = b + a;
			printf("%d + %d = %d\n", a, b, ans);
			push(s, ans);
		} else if(c == '-'){
			a = pop(s);
			b = pop(s);
			ans = b - a;
			printf("%d - %d = %d\n", a, b, ans);
			push(s, ans);
		} else if(c == '*'){
			a = pop(s);
			b = pop(s);
			ans = b * a;
			printf("%d * %d = %d\n", a, b, ans);
			push(s, ans);
		} else if(c == '/'){
			a = pop(s);
			b = pop(s);
			ans = b / a;
			printf("%d / %d = %d\n", a, b, ans);
			push(s, ans);
		} else if(c == '='){
			printf("Value of expression = %d", ans);
		}
	}
}

void display(Stack s){
	for(int i = 0; i < s->top; i++){
		printf(" ======================\n");
		printf("||                    ||\n");
		printf("||         %d          ||\n", s->contents[i]);
		printf("||                    ||\n");
		printf(" ======================\n");
	}
}