/* 02/16/2022 */
/* Stack for RPN */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void push(int);
int pop(void);
void menu(void);
void display(void);
void rpn(void);

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
	// printf("3. Check for proper nesting.\n");
	printf("4. Display stack. \n");
	printf("5. RPN.\n");
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
	} else if(choice == 4){
		display();
	} else if(choice == 5){
		rpn();
	}
	else{
		printf("Invalid choice, try again.\n");
	}
}

void push(int letter){
	if(is_full()){
		printf("Stacks full, try popping something.\n");
		return;
	}
	contents[top++] = letter;
	printf("Pushed %d onto the stack!\n", letter);
}

int pop(void){
	if(is_empty()){
		printf("Stacks empty, try pushing something.\n");
		return 0;
	}
	printf("Popping %d\n", contents[--top]);
	int popped = contents[top];
	contents[top] = 0;
	return popped;
}

void rpn(void){
	char c;
	int a, b, ans, conv = 0;
	printf("Enter an RPN expression: ");
	getchar();
	while((c = getchar()) != '\n'){
		conv = c - '0';

		if(conv > 0 && conv < 10){
			push(conv);
		} else if(c == '+') {
			a = pop();
			b = pop();
			ans = b + a;
			printf("%d + %d = %d\n", a, b, ans);
			push(ans);
		} else if(c == '-'){
			a = pop();
			b = pop();
			ans = b - a;
			printf("%d - %d = %d\n", a, b, ans);
			push(ans);
		} else if(c == '*'){
			a = pop();
			b = pop();
			ans = b * a;
			printf("%d * %d = %d\n", a, b, ans);
			push(ans);
		} else if(c == '/'){
			a = pop();
			b = pop();
			ans = b / a;
			printf("%d / %d = %d\n", a, b, ans);
			push(ans);
		} else if(c == '='){
			printf("Value of expression = %d", ans);
		}
	}
}

void display(void){
	for(int i = 0; i < top; i++){
		printf(" ======================\n");
		printf("||                    ||\n");
		printf("||         %d          ||\n", contents[i]);
		printf("||                    ||\n");
		printf(" ======================\n");
	}
}
