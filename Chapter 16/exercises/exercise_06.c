/* 02/27/2022 */
/* Uses structs to convert seconds since midnight to time. */

#include <stdio.h>

struct time{
	int hours;
	int minutes;
	int seconds;
};

struct time split_time(long total_seconds);

int main(void){
	long total;
	printf("Enter seconds since midnight: ");
	scanf("%ld", &total);
	struct time a = split_time(total);
	printf("Time since midnight converted: %d:%d:%.2d\n", a.hours, a.minutes, a.seconds);
	return 0;
}
//145,086 4:18:06
struct time split_time(long total_seconds){
	struct time a;
	a.seconds = total_seconds % 60;
	a.minutes = (total_seconds/60)%60;
	a.hours = ((total_seconds/60)/24)%24;
	return a;
}