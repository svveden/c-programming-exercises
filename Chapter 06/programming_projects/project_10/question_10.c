/* 01/26/2022 */
/* This program takes in any number of dates and outputs which is older than the others. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int month_1,day_1,year_1;
	int month_earliest = 0 ,day_earliest = 0,year_earliest = 0;
	for(;;){
		while(month_1!=0 || day_1!=0){
			printf("Enter first date: ");
			scanf("%d/%d/%d", &month_1, &day_1, &year_1);
			if(month_1 == 0){
				printf("%d/%d/%.2d is the earliest date\n", month_earliest, day_earliest, year_earliest);
				return 0;
			}
			if(month_earliest == 0){
				month_earliest = month_1;
				day_earliest = day_1;
				year_earliest = year_1;
			}
			if (year_1 < year_earliest){
				month_earliest = month_1;
				day_earliest = day_1;
				year_earliest = year_1;
			} else if(month_1 < month_earliest && !(year_1 > year_earliest)){
				month_earliest = month_1;
				day_earliest = day_1;
				year_earliest = year_1;
			} else if(day_1 < day_earliest && !(year_1 > year_earliest) && !(month_1 > month_earliest)){
				month_earliest = month_1;
				day_earliest = day_1;
				year_earliest = year_1;
			} 
		}
	}
	printf("\n");
	return 0;
}
