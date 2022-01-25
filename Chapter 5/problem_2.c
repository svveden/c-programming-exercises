/* 01/25/2022 */
/* This program takes a 24-hour time and converts it to 12-hour time */

#include <stdio.h>

int main(void){
	int hour;
	int minute;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	printf("Equivalent 12-hour time: ");
	if(hour == 00){
		hour = 12; 
	}
	if(hour>12){
		hour = hour%12;
		printf("%d:%.2d PM\n", hour, minute);
	}
	else if(hour == 12){
		printf("%d:%.2d PM\n", hour, minute);
	}
	else{
		printf("%d:%.2d AM\n", hour, minute);
	}

	return 0;
}
