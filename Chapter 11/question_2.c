/* 02/18/2022 */
/* This program tells you which flight departure is closest to your 24-hour designated time. */

#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){
	printf("Departure times:\t  Arrival times:\n");
	printf("   8:00 A.M.\t\t    10:16 A.M.\n");
	printf("   9:43 A.M.\t\t    11:52 A.M.\n");
	printf("  11:19 A.M.\t\t     1:31 P.M.\n");
	printf("  12:47 A.M.\t\t     3:00 P.M.\n");
	printf("   2:00 P.M.\t\t     4:08 P.M.\n");
	printf("   3:45 P.M.\t\t     5:55 P.M.\n");
	printf("   7:00 P.M.\t\t     9:20 P.M.\n");
	printf("   9:45 P.M.\t\t    11:58 P.M.\n");


	int hours, minutes, flight, flight_taken,converted_time;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	converted_time = hours * 60 + minutes;
	int departure, arrival;
	find_closest_flight(converted_time, &departure, &arrival);
	minutes = departure%60;
	hours = (departure-minutes)/60;
	printf("Departure time: %d:%.2d", hours, minutes);
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
	int flights[8] = {8 * 60 + 00,9 * 60 + 43,11 * 60 + 19,12 * 60 + 47,14 * 60 + 00,15 * 60 + 45,19 * 60 + 00,21 * 60 + 45}; 
	for(int i = 0; i < 8; i++){
		if(desired_time > flights[i] && desired_time < flights[i+1]){
			if(desired_time - flights[i] > flights[i+1] - desired_time){
				*departure_time = flights[i+1];
			} else{
				*departure_time = flights[i];
			}
		} else{
			if(desired_time > 0 && desired_time < 480){
				*departure_time = flights[0];
			} else{
				*departure_time = flights[7];
			}
		}
	}
}
