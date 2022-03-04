/* 03/04/2022 */
/* This program is a monthly reminder calendar using vstrings! */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_REM 50
#define MAX_MES 60

int read_line(char str[], int n);

struct vstring{
	int len;
	char chars[];
};

int main(void){
	int day, num_reminder = 0, i, j;
	char day_str[3], msg_str[MAX_MES+1];
	struct vstring *reminders[MAX_REM];
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
			if(strcmp(day_str, reminders[i]->chars) < 0){
				break;
			}
		}
		for(j = num_reminder; j > i; j--){
			reminders[j] = reminders[j-1];
		}
		reminders[i] = malloc(sizeof(struct vstring) + strlen(msg_str));
		reminders[i]->len = strlen(msg_str);
		if(reminders[i] == NULL){
			printf("---NO SPACE LEFT---\n");
			break;
		}
		strcpy(reminders[i]->chars, day_str);
		strcat(reminders[i]->chars, msg_str);
		num_reminder++;

	}
	printf("\nDay Reminder\n");
	for(int i = 0; i < num_reminder; i++){
		printf("   %s\n", reminders[i]->chars);
	} return 0;
}

int read_line(char str[], int n){
	int ch, i = 0;

	while((ch = getchar()) != '\n'){
		if(i < n){
			str[i++] = ch;
		}
	} str[i] = '\0';
	return i;
}
