/* 01/25/2022 */
/* This program takes in a given area code and checks in using a switch statement to find out if its a known area code. */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	int area_code;
	printf("Enter area code: ");
	scanf("%d", &area_code);
	
	switch(area_code){
		case 229: printf("Albany");
		break;
		case 404: printf("Atlanta");
		break;
		case 470: printf("Atlanta");
		break;
		case 478: printf("Macon");
		break;
		case 678: printf("Atlanta");
		break;
		case 706: printf("Columbus");
		break;
		case 762: printf("Columbus");
		break;
		case 770: printf("Atlanta");
		break;
		case 912: printf("Savannah");
		break;
		default: printf("Area code not recognized.");
	}

	return 0;

}
