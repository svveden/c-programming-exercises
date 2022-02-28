/* 02/26/2020 */
/* Parts Database Program */

#include <stdio.h>
#include <stdlib.h>

#ifndef DATABASE_H
#define DATABASE_H
#include "database_functions.h"
#endif

int main(void){
	char ans; 
	printf(" ////////////////////////////////////////////////////////////////////////\n");
	printf(" \
/     _   _    ____  _____ ____  ____    ____   _    ____ _____ ____   /\n \
/    | | / \\  |  _ \\| ____|  _ \\/ ___|  |  _ \\ / \\  |  _ \\_   _/ ___|  /\n\
 / _  | |/ _ \\ | |_) |  _| | | | \\___ \\  | |_) / _ \\ | |_) || | \\___ \\  /\n\
 /| |_| / ___ \\|  _ <| |___| |_| |___) | |  __/ ___ \\|  _ < | |  ___) | /\n\
 / \\___/_/   \\_\\_| \\_\\_____|____/|____/  |_| /_/   \\_\\_| \\_\\|_| |____/  /\n");
	printf(" ////////////////////////////////////////////////////////////////////////\n");
	printf("OPTIONS:\nINSERT - > i\nSEARCH - > s\nUPDATE - > u\nPRINT - > p\nUPDATE_PRICE - > g\nQUIT - > q\n");
	for(;;){
		int number, on_hand, update;
		float price;
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
				printf("Enter price amount: ");
				scanf("%f", &price);
				insert(number, name, on_hand, price);
				break;
			case 's':
				printf("Enter part number: ");
				scanf("%d", &number);
				search_item(number);
				break;
			case 'u':
				printf("Enter part number: ");
				scanf("%d", &number);
				printf("Enter amount on hand: ");
				scanf(" %d", &update);
				update_item(number, update);
				break;
			case 'g':
				printf("Enter part number: ");
				scanf("%d", &number);
				printf("Enter price amount: ");
				scanf(" %f", &price);
				update_price(number, price);
				break;
			case 'p':
				print_inventory();
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
