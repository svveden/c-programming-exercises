/* 02/25/2022 */
/* This program is a monthly reminder calendar */

#include <stdio.h>
#include <string.h>
#include "readline.h"
#define MAX_REM 50
#define MAX_MES 60

int main(void){
	int day, num_reminder = 0, i, j;
	char day_str[3], msg_str[MAX_MES+1];
	char reminder[MAX_REM][MAX_MES+3];
	for(;;){

		if(num_reminder == MAX_REM){
			printf("--NO SPACE LEFT--\n");
			break;
		}
		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if(day == 0){
			break;
		}
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MAX_MES);

		for(i = 0; i < num_reminder; i++){
			if(strcmp(day_str, reminder[i]) < 0){
				break;
			}
		}
		for(j = num_reminder; j > i; j--){
			strcpy(reminder[j], reminder[j-1]);
		}
		strcpy(reminder[i], day_str);
		strcat(reminder[i], msg_str);
		num_reminder++;

	}
	printf("\nDay Reminder\n");
	for(int i = 0; i < num_reminder; i++){
		printf("   %s\n", reminder[i]);
	} return 0;
}
