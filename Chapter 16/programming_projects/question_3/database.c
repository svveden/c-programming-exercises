/* 02/26/2020 */
/* Parts Database Program */

#include <stdio.h>
#include <stdlib.h>

#ifndef DATABASE_H
#define DATABASE_H
#include "database_functions.h"
#endif

int main(void){
	struct part inventory[100];
	int inventory_position = 0;
	char ans; 
	printf(" ////////////////////////////////////////////////////////////////////////\n");
	printf(" \
/     _   _    ____  _____ ____  ____    ____   _    ____ _____ ____   /\n \
/    | | / \\  |  _ \\| ____|  _ \\/ ___|  |  _ \\ / \\  |  _ \\_   _/ ___|  /\n\
 / _  | |/ _ \\ | |_) |  _| | | | \\___ \\  | |_) / _ \\ | |_) || | \\___ \\  /\n\
 /| |_| / ___ \\|  _ <| |___| |_| |___) | |  __/ ___ \\|  _ < | |  ___) | /\n\
 / \\___/_/   \\_\\_| \\_\\_____|____/|____/  |_| /_/   \\_\\_| \\_\\|_| |____/  /\n");
	printf(" ////////////////////////////////////////////////////////////////////////\n");
	printf("OPTIONS:\nINSERT - > i\nSEARCH - > s\nUPDATE - > u\nPRINT - > p\nQUIT - > q\n");
	for(;;){
		int number, on_hand, update;
		char name[MAX_NAME_LENGTH+1];
		printf("\nPlease choose an option: ");
		scanf("%c", &ans);
		switch(ans){
			case 'i': 
				printf("Enter part number: ");
				scanf("%d", &number);
				printf("Enter part name: ");
				read_line(name, MAX_NAME_LENGTH+1);
				printf("Enter amount in stock: ");
				scanf("%d", &on_hand);
				inventory_position = insert(inventory, inventory_position, number, name, on_hand);
				break;
			case 's':
				printf("Enter part number: ");
				scanf("%d", &number);
				search_item(inventory, inventory_position, number);
				break;
			case 'u':
				printf("Enter part number: ");
				scanf("%d", &number);
				printf("Enter amount on hand: ");
				scanf(" %d", &update);
				update_item(inventory, inventory_position, number, update);
				break;
			case 'p':
				print_inventory(inventory, inventory_position);
				break;
			case 'q':
				exit(0);
			default:
				printf("Invalid choice.");
		}
		getchar();
	}
	return 0;
}
