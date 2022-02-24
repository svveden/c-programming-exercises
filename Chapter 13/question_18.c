/* 02/23/2022 */
/* Asks for a date then outputs the written month from an array of months. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char months[13][10] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int month, day, year;
	char written_month[10];
	printf("Enter date mm/dd/yyyy: ");
	scanf("%d/%d/%d", &month, &day, &year);
	strcpy(written_month, months[month-1]);
	printf("You entered the date %s %d, %d\n", written_month, day, year);
}
