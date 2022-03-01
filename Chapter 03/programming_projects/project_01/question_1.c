/* 1/24/2022 */
/* This program takes in a date in format mm/dd/yyyy and converts it to yyyymmdd. */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int month;
	int day;
	int year;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("You entered the date %d%.2d%.2d\n",year,month,day);
	return 0;
}
