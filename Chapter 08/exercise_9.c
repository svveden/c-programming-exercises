/*	02/09/2022 */
/* This program calculates avg temp over a month */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	double avg;
	double temperature_readings[30][24] = {0};
	for(int i = 0; i < 30; i++){
		for(int j = 0; j < 24; j++){
			avg += temperature_readings[i][j];
		}
	}
	printf("Average: %.2f\n", avg/(30*24));
	return 0;
}
