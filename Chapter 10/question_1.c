/* 02/16/2022 */
/* Stack for chars */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void push(char);
char pop(void);
void menu(void);
void display(void);
void nesting(void);

void stack_empty(void){
	top = 0;
}
bool is_empty(void){
	return top == 0;
}
bool is_full(void){
	return top == STACK_SIZE; 
}

int main(void){
	while(1){
		menu();
	}
	return 0;
}

void menu(void){
	int choice;
	char letter;
	printf("\nStack menu: \n");
	printf("1. Push char onto stack.\n");
	printf("2. Pop char off of stack.\n");
	printf("3. Check for proper nesting.\n");
	printf("4. Display stack. \n");
	printf("0. Quit.\n");
	printf("Enter choice: ");
	scanf(" %d", &choice);
	if(choice == 0){
		exit(0);
	} else if(choice == 1){
		printf("Enter a char to put on the stack: ");
		scanf("\n%c", &letter);
		push(letter);
	} else if(choice == 2){
		pop();
	} else if(choice == 3){
		nesting();
	} else if(choice == 4){
		display();
	} else{
		printf("Invalid choice, try again.\n");
	}
}

void push(char letter){
	if(is_full()){
		printf("Stacks full, try popping something.\n");
		return;
	}
	contents[top++] = letter;
	printf("Pushed %c onto the stack!\n", letter);
}

char pop(void){
	if(is_empty()){
		printf("Stacks empty, try pushing something.\n");
		return ' ';
	}
	printf("Popping %c\n", contents[--top]);
	char popped = contents[top];
	contents[top] = ' ';
	return popped;
}

void nesting(void){
	char c;
	printf("Enter parentheses and/or braces: ");
	getchar();
	while((c = getchar()) != '\n'){
		if(c == '{' || c == '('){
			push(c);
		} 
		else if(c == '}'){
				if(pop() != '{'){
					printf("Not properly nested.\n");
					stack_empty();
					return;
				}
		} 
		else if(c == ')'){
				if(pop() != '('){
					printf("Not properly nested.\n");
					stack_empty();
					return;
				}
		}

	} if(c == '\n'){
		if(is_empty()){
			printf("Properly nested. \n");
			stack_empty();
		} else{
			printf("Not properly nested \n");
			stack_empty();
		}
	}
}

void display(void){
	for(int i = 0; i < top; i++){
		printf(" ======================\n");
		printf("||                    ||\n");
		printf("||         %c          ||\n", contents[i]);
		printf("||                    ||\n");
		printf(" ======================\n");
	}
}
