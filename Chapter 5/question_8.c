/* 01/25/2022 */
/* This program tells you which flight departure is closest to your 24-hour designated time. */
/* This program was much more difficult than I anticipated and I would like to come back to  */
/* this and clean this up to be exactly as detailed in the book                              */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int hours, minutes, flight, flight_taken,converted_time;
	int flight_1 = 8 * 60 + 00;
	int flight_2 = 9 * 60 + 43;
	int flight_3 = 11 * 60 + 19;
	int flight_4 = 12 * 60 + 47;
	int flight_5 = 14 * 60 + 00;
	int flight_6 = 15 * 60 + 45;
	int flight_7 = 19 * 60 + 00;
	int flight_8 = 21 * 60 + 45; 

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	converted_time = hours * 60 + minutes;

	if(converted_time >= flight_1 && converted_time <= flight_2){
		flight = converted_time - flight_1;
		flight_taken = converted_time - flight_2;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is: %d:%d\n", flight_2/60, flight_2%60);
		}
		else{
			printf("Closest departure time is: %d:%d\n", flight_1/60, flight_1%60);
		}
	} else if(converted_time >= flight_2 && converted_time <= flight_3){
		flight = converted_time - flight_2;
		flight_taken = converted_time - flight_3;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is: %d:%d\n", flight_3/60, flight_3%60);
		}
		else{
			printf("Closest departure time is: %d:%d\n", flight_2/60, flight_2%60);
		}
	} else if(converted_time >= flight_3 && converted_time <= flight_4){
		flight = converted_time - flight_3;
		flight_taken = converted_time - flight_4;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is: %d:%d\n", flight_4/60, flight_4%60);
		}
		else{
			printf("Closest departure time is: %d:%d\n", flight_3/60, flight_3%60);
		}
	} else if(converted_time >= flight_4 && converted_time <= flight_5){
		flight = converted_time - flight_4;
		flight_taken = converted_time - flight_5;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is: %d:%d\n", flight_5/60, flight_5%60);
		}
		else{
			printf("Closest departure time is: %d:%d\n", flight_4/60, flight_4%60);
		}
	} else if(converted_time >= flight_5 && converted_time <= flight_6){
		flight = converted_time - flight_5;
		flight_taken = converted_time - flight_6;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is: %d:%d\n", flight_6/60, flight_6%60);
		}
		else{
			printf("Closest departure time is: %d:%d\n", flight_5/60, flight_5%60);
		}
	} else if(converted_time >= flight_6 && converted_time <= flight_7){
		flight = converted_time - flight_6;
		flight_taken = converted_time - flight_7;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is: %d:%d\n", flight_7/60, flight_7%60);
		}
		else{
			printf("Closest departure time is: %d:%d\n", flight_6/60, flight_6%60);
		}
	} else if(converted_time >= flight_7 && converted_time <= flight_8){
		flight = converted_time - flight_7;
		flight_taken = converted_time - flight_8;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is: %d:%d\n", flight_8/60, flight_8%60);
		}
		else{
			printf("Closest departure time is: %d:%d\n", flight_7/60, flight_7%60);
		}
	}

	return 0;
}
