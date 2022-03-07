#include <stdio.h>
#include <stdlib.h>
#include "question_2.h"

int main(void){
	while(1){
		menu();
	}
	return 0;
}

void menu(void){
	int choice;
	char letter;
	Stack s;
	printf("\nStack menu: \n");
	printf("1. Push char onto stack.\n");
	printf("2. Pop char off of stack.\n");
	// printf("3. Check for proper nesting.\n");
	printf("4. Display stack. \n");
	printf("5. RPN.\n");
	printf("6. Create Stack.\n");
	printf("0. Quit.\n");
	printf("Enter choice: ");
	scanf(" %d", &choice);
	if(choice == 0){
		exit(0);
	} else if(choice == 6){
		s = create(100);
	} else if(choice == 1){
		printf("Enter a char to put on the stack: ");
		scanf("\n%c", &letter);
		push(s, letter);
	} else if(choice == 2){
		pop(s);
	} else if(choice == 4){
		display(s);
	} else if(choice == 5){
		rpn(s);
	}
	else{
		printf("Invalid choice, try again.\n");
	}
}