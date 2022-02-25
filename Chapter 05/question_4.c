/* 01/25/2022 */
/* This program calculates wind intensity given knots based of Beaufort scale. */

#include <stdio.h>

int main(void){
	int knots;
	printf("Enter wind speed (knots): ");
	scanf("%d", &knots);
	if(knots < 1){
		printf("Calm\n");
	} else if(knots < 4){
		printf("Light Air\n");
	} else if(knots < 28){
		printf("Breeze\n");
	} else if(knots < 48){
		printf("Gale\n");
	} else if(knots < 64){
		printf("Storm\n");
	} else{
		printf("Hurricane\n");
	}
	return 0;
}
