/* 01/26/2022 */
/* This program takes in the number of days in a month and a start day then outputs a calendar matching those. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num_of_day;
	int day_first;
	printf("Enter number of days in month: ");
	scanf("%d", &num_of_day);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day_first);
	for(int i = 1, week_day = -1; i <= num_of_day; i++, week_day++){
		if(i==1){
			for(int j = day_first; j > 1; j--){
				printf("     ");
			}
			week_day += day_first;
		}
		if(week_day == 7){
			week_day = 0;
			printf("\n");
		}
		printf("%5d", i);
	} printf("\n");
  return 0;
}
