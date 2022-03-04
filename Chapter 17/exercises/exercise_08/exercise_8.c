/* 03/03/2022 */
/* Stack with struct pointers */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack{
	int value;
	struct stack *next;
};

struct stack *first = NULL;

bool push(int);
int pop(void);
void menu(void);
void display(void);


int main(void){
	while(1){
		menu();
	}
	return 0;
}

void stack_empty(void){
	struct stack *p;
	while(first != NULL){
		p = first;
		first = first->next;
		free(p);
	}
}
bool is_empty(void){
	return first == NULL;
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
	}
	else{
		printf("Invalid choice, try again.\n");
	}
	return;
}

bool push(int letter){
	struct stack *new_node, *temp;
	if((new_node = malloc(sizeof(struct stack))) == NULL){
		printf("Stacks full, try popping something.\n");
		return false;
	}
	temp = first;
	first = new_node;
	new_node->next = temp;
	new_node->value = letter;
	printf("Pushed %c onto the stack!\n", letter);
	return true;
}

int pop(void){
	if(is_empty()){
		printf("Stacks empty, try pushing something.\n");
		exit(0);
		return 0;
	}
	printf("Popping %d\n", first->value);
	int popped = first->value;
	struct stack *temp = first->next;
	free(first);
	first = temp;
	return popped;
}

void display(void){
	struct stack *p = first;
	for(; p != NULL; p=p->next){
		printf(" ======================\n");
		printf("||                    ||\n");
		printf("||         %d         ||\n", p->value);
		printf("||                    ||\n");
		printf(" ======================\n");
	}
}