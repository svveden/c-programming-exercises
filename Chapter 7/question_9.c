/* 01/27/2022 */
/* This program converts 24-hour time to 12 hour. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	int hours, minutes;
	char a_p;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hours, &minutes, &a_p);
	a_p = toupper(a_p);
	if(a_p == 'P'){
		hours = hours+12;
	}
	printf("Equivalent 24-hour time: %d:%d %cM\n", hours, minutes, a_p);
	return 0;
}
