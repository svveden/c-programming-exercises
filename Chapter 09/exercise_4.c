/* 02/14/2022 */
/* This program uses recursion to tell you what day of the year a certain date was/is. */

#include <stdio.h>
#include <stdlib.h> 

int day_of_year(int day, int month, int year){
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;
	int is_leap = 0;
	if(year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0){
				is_leap = 1;
			} else{
				is_leap = 0;
			}
		} else{
			is_leap = 1;
		}
	} else{
		is_leap = 0;
	}
	for(int i = 0; i < month-1; i++){
		sum += months[i];
	}
	sum+=day;
	if(is_leap && month > 2){
		sum+=1;
		return printf("Date: %d", sum);
	}else{
		return printf("Date: %d", sum);
	}

}

int main(void){
	int day, month, year;
	printf("Enter day, month, year: ");
	scanf("%d %d %d", &day, &month, &year);
	day_of_year(day, month, year);
	return 0;
}
