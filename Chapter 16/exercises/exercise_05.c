/* 02/27/2022 */
/* Uses structs to convert date to day of year and compares them. */

#include <stdio.h>

struct date{
	int month;
	int day;
	int year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void){
	struct date d, c;
	printf("Enter day, month, year mm/dd/yyyy: ");
	scanf("%d/%d/%d", &d.month, &d.day, &d.year);
	int date1 = day_of_year(d);
	printf("Day of year of date 1: %d\n", date1);
	printf("Enter second day, month, year mm/dd/yyyy: ");
	scanf("%d/%d/%d", &c.month, &c.day, &c.year);
	int date2 = day_of_year(c);
	printf("Day of year of date 2: %d\n", date2);
	if(compare_dates(d, c) == 1){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", c.month, c.day, c.year, d.month, d.day, d.year);
	} else {
		printf("%d/%d/%d is earlier than %d/%d/%d\n", d.month, d.day, d.year, c.month, c.day, c.year);
	}
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
		return sum;
	}else{
		return sum;
	}

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
