/* 01/26/2022 */
/* This program takes in 2 dates and outputs which is older than the other. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int month_1,day_1,year_1,month_2,day_2,year_2;
	printf("Enter first date: ");
	scanf("%d/%d/%d", &month_1, &day_1, &year_1);
	printf("Enter second date: ");
	scanf("%d/%d/%d", &month_2, &day_2, &year_2);
	if(year_1<year_2){
		printf("%d/%d/%.2d is earlier than ", month_1, day_1, year_1);
		printf("%d/%d/%.2d", month_2, day_2, year_2);
	}
	else if(year_1>year_2){
		printf("%d/%d/%.2d is earlier than ", month_2, day_2, year_2);
		printf("%d/%d/%.2d", month_1, day_1, year_1);
	}
	else if(month_1<month_2){
		printf("%d/%d/%.2d is earlier than ", month_1, day_1, year_1);
		printf("%d/%d/%.2d", month_2, day_2, year_2);
	}
	else if(month_1>month_2){
		printf("%d/%d/%.2d is earlier than ", month_2, day_2, year_2);
		printf("%d/%d/%.2d", month_1, day_1, year_1);
	}
	else if(day_1<day_2){
		printf("%d/%d/%.2d is earlier than ", month_1, day_1, year_1);
		printf("%d/%d/%.2d", month_2, day_2, year_2);
	}
	else if(day_1>day_2){
		printf("%d/%d/%.2d is earlier than ", month_2, day_2, year_2);
		printf("%d/%d/%.2d", month_1, day_1, year_1);
	}
	else{
		printf("These dates are equal!");
	}
	printf("\n");
	return 0;
}
