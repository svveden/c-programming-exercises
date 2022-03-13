/* 03/13/2022 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int day, month, year;
	sscanf(argv[1], "%d-%d-%d", &month, &day, &year);
	switch(month){
		case 1: 
			printf("January");
			break;
		case 2: 
			printf("February");
			break;
		case 3: 
			printf("March");
			break;
		case 4: 
			printf("April");
			break;
		case 5: 
			printf("May");
			break;
		case 6: 
			printf("June");
			break;
		case 7: 
			printf("July");
			break;
		case 8: 
			printf("August");
			break;
		case 9: 
			printf("September");
			break;
		case 10: 
			printf("October");
			break;
		case 11: 
			printf("November");
			break;
		case 12: 
			printf("December");
			break;
	}
	printf(" %d, %d", day, year);
	return 0;
}