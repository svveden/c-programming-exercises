/* 02/28/2022 */
/* This program takes in 2 dates and outputs which is older than the other. */

#include <stdio.h>
#include <stdlib.h>

struct date{
	int day;
	int month;
	int year;
};

int compare_dates(struct date d1, struct date d2);

int main(void){
	struct date date_1, date_2;
	printf("Enter first date: ");
	scanf("%d/%d/%d", &date_1.month, &date_1.day, &date_1.year);
	printf("Enter second date: ");
	scanf("%d/%d/%d", &date_2.month, &date_2.day, &date_2.year);
	if(compare_dates(date_2, date_1) == 1){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", date_1.month, date_1.day, date_1.year, date_2.month, date_2.day, date_2.year);
	} else if(-1){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", date_2.month, date_2.day, date_2.year, date_1.month, date_1.day, date_1.year);
	} else{
		printf("These dates are equal!");
	}
	printf("\n");
	return 0;
}

int compare_dates(struct date d1, struct date d2){
	if(d1.year > d2.year){
		return 1;
	} else if(d1.year < d2.year) {
		return -1;
	}
	if(d1.month > d2.month){
		return 1;
	} else if(d1.month < d2.month){
		return -1;
	}
	if(d1.day > d2.day){
		return 1;
	}else if(d1.day > d2.day){
		return -1;
	} else{
		return 0;
	}
}