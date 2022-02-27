/* 02/27/2022 */
/* Uses structs to convert date to day of year */

#include <stdio.h>

struct date{
	int month;
	int day;
	int year;
};

int day_of_year(struct date d);

int main(void){
	struct date d;
	printf("Enter day, month, year dd/mm/yyyy: ");
	scanf("%d/%d/%d", &d.day, &d.month, &d.year);
	day_of_year(d);
	return 0;
}

int day_of_year(struct date d){
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;
	int is_leap = 0;
	if(d.year % 4 == 0){
		if(d.year % 100 == 0){
			if(d.year % 400 == 0){
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
	for(int i = 0; i < d.month-1; i++){
		sum += months[i];
	}
	sum+=d.day;
	if(is_leap && d.month > 2){
		sum+=1;
		return printf("Date: %d", sum);
	}else{
		return printf("Date: %d", sum);
	}

}