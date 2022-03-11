/* 02/18/2022 */
/* This program outputs time when given seconds since midnight */

#include <stdlib.h>
#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void){
	long total_sec;
	int hr, min, sec;
	printf("Enter number of seconds since midnight: ");
	scanf("%ld", &total_sec);
	split_time(total_sec, &hr, &min, &sec);
	printf("Current time: %d:%d:%d\n", hr, min, sec);
}

void split_time(long total_sec, int *hr, int *min, int *sec){
	*sec = total_sec % 60;
	*min = (total_sec / 60) % 60;
	*hr = ((total_sec / 60) / 60) % 60;
}
