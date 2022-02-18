/* 02/18/2022 */
/* This program creates a random walk on a 10x10 grid from A -> Z */

//fix this

#include <stdlib.h>
#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);
	
int main(void){
	int day_of_year, year, month, day;
	printf("Enter number of the year: ");
	scanf("%d %d", &day_of_year, &year);
	split_date(day_of_year, year, &month, &day);
	printf("Day %d of the %d month\n", day, month);
	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day){
	int dates[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int is_leap = 0;
	int sum = 0;


	//check for leap year//
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


	for(int i = 0; i < 12; i++){
		sum+=dates[i];
		if(day_of_year <= sum){
			*month = i+1;

			if(*month > 2){
				if(*month % 3 == 0){
					*day = day_of_year/i % 31;
				} else{
					*day = day_of_year/i % 30;
				}
				if(is_leap){
					*day += 1;
				}
			} else if(*month == 1){
				*day = day_of_year;
			} else if(*month == 2){
				*day = day_of_year/i % 31;
			}
			return;
		} 
	}
}
