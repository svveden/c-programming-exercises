/* 01/27/2022 */
/* This program tells you which flight departure is closest to your 12-hour designated time. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	printf("Departure times:\t  Arrival times:\n");
	printf("   8:00 A.M.\t\t    10:16 A.M.\n");
	printf("   9:43 A.M.\t\t    11:52 A.M.\n");
	printf("  11:19 A.M.\t\t     1:31 P.M.\n");
	printf("  12:47 P.M.\t\t     3:00 P.M.\n");
	printf("   2:00 P.M.\t\t     4:08 P.M.\n");
	printf("   3:45 P.M.\t\t     5:55 P.M.\n");
	printf("   7:00 P.M.\t\t     9:20 P.M.\n");
	printf("   9:45 P.M.\t\t    11:58 P.M.\n");


	int hours, minutes, flight, flight_taken,converted_time;
	char a_p;
	int flight_1 = 8 * 60 + 00;
	int flight_2 = 9 * 60 + 43;
	int flight_3 = 11 * 60 + 19;
	int flight_4 = 12 * 60 + 47;
	int flight_5 = 14 * 60 + 00;
	int flight_6 = 15 * 60 + 45;
	int flight_7 = 19 * 60 + 00;
	int flight_8 = 21 * 60 + 45; 

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hours, &minutes, &a_p);
	a_p = toupper(a_p);
	if(a_p == 'A'){
		converted_time = hours * 60 + minutes;
	} else{
		converted_time = (hours + 12) * 60 + minutes;
	}
	if(converted_time <= flight_1 || converted_time >= flight_8){
		flight = converted_time - flight_1;
		flight_taken = converted_time - flight_8;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 9:45 P.M., arriving at 11:58 P.M.\n");
		}
		else{
			printf("Closest departure time is 8:00 A.M., arriving at 10:16 A.M.\n");
		}
	}
	else if(converted_time >= flight_1 && converted_time <= flight_2){
		flight = converted_time - flight_1;
		flight_taken = converted_time - flight_2;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 9:43 A.M., arriving at 11:52 A.M.\n");
		}
		else{
			printf("Closest departure time is 8:00 A.M., arriving at 10:16 A.M.\n");
		}
	} else if(converted_time >= flight_2 && converted_time <= flight_3){
		flight = converted_time - flight_2;
		flight_taken = converted_time - flight_3;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 11:19 A.M., arriving at 1:31 P.M.\n");
		}
		else{
			printf("Closest departure time is 9:43 A.M., arriving at 11:52 A.M.\n");
		}
	} else if(converted_time >= flight_3 && converted_time <= flight_4){
		flight = converted_time - flight_3;
		flight_taken = converted_time - flight_4;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 12:47 A.M., arriving at 3:00 P.M.\n");
		}
		else{
			printf("Closest departure time is 11:19 A.M., arriving at 1:31 P.M.\n");
		}
	} else if(converted_time >= flight_4 && converted_time <= flight_5){
		flight = converted_time - flight_4;
		flight_taken = converted_time - flight_5;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 2:00 P.M., arriving at 4:08 P.M.\n");
		}
		else{
			printf("Closest departure time is 12:47 A.M., arriving at 3:00 P.M.\n");
		}
	} else if(converted_time >= flight_5 && converted_time <= flight_6){
		flight = converted_time - flight_5;
		flight_taken = converted_time - flight_6;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 3:45 P.M., arriving at 5:55 P.M.\n");
		}
		else{
			printf("Closest departure time is 2:00 P.M., arriving at 4:08 P.M.\n");
		}
	} else if(converted_time >= flight_6 && converted_time <= flight_7){
		flight = converted_time - flight_6;
		flight_taken = converted_time - flight_7;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 7:00 P.M., arriving at 9:20 P.M.\n");
		}
		else{
			printf("Closest departure time is 3:45 P.M., arriving at 5:55 P.M.\n");
		}
	} else if(converted_time >= flight_7 && converted_time <= flight_8){
		flight = converted_time - flight_7;
		flight_taken = converted_time - flight_8;
		if(abs(flight) > abs(flight_taken)){
			printf("Closest departure time is 9:45 P.M., arriving at 11:58 P.M.\n");
		}
		else{
			printf("Closest departure time is 7:00 P.M., arriving at 9:20 P.M.\n");
		}
	} else{
		printf("NO FLIGHT FOUND");
	}
}
