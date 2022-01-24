/* 01/24/20222 */
/* This program takes in a phone number and outputs it in the designated format. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int area_code;
	int first_3;
	int last_4;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &first_3, &last_4);
	printf("You entered: %d.%d.%d\n", area_code, first_3, last_4);
	return 0;
}
