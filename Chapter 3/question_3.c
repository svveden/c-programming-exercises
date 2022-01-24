/* 01/24/2022 */
/* This program takes an ISBN number and breaks it down into its designated parts. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int gs1_prefix;
	int group_identifier;
	int publisher_code;
	int item_number;
	int check_digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",&gs1_prefix,&group_identifier,&publisher_code,&item_number,&check_digit);
	printf("GS1 prefix: %d\n", gs1_prefix);
	printf("Group identifier: %d\n", group_identifier);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", check_digit);
	return 0;
}
