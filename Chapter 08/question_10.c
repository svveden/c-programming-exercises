/* 02/10/2022 */
/* Updated departure finder */

#include <stdio.h>
#include <stdlib.h>
#define NUM_FLIGHTS 8

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

	int departures[NUM_FLIGHTS] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	int flight_taken = 0, hours = 0, minutes = 0, converted_minutes = 0;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	int converted_time = hours * 60 + minutes;
	for(int i = 0; i < NUM_FLIGHTS; i++){
		if(converted_time >= departures[i] && converted_time <= departures[i+1]){
			if(abs(converted_time - departures[i]) > abs(converted_time - departures[i+1])){
				converted_minutes = (departures[i+1] % 60);
				flight_taken = ((departures[i+1] - converted_minutes) / 60);
				return printf("Flight taken: %d:%.2d\n", flight_taken, converted_minutes);
			} else {
				converted_minutes = (departures[i] % 60);
				flight_taken = ((departures[i] - converted_minutes) / 60);
				return printf("Flight taken: %d:%.2d\n", flight_taken, converted_minutes);
			}
		} else if(converted_time - departures[i] > 0 && i > NUM_FLIGHTS - 2){
			converted_minutes = (departures[i] % 60);
			flight_taken = ((departures[i] - converted_minutes) / 60);
			return printf("Flight taken: %d:%.2d\n", flight_taken, converted_minutes);
		} else if(converted_time - departures[i] < 0 && i > NUM_FLIGHTS - 2){
			converted_minutes = (departures[0] % 60);
			flight_taken = ((departures[0] - converted_minutes) / 60);
			return printf("Flight taken: %d:%.2d\n", flight_taken, converted_minutes);
		}
	}
	return 0;
}
