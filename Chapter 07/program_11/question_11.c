/* 01/27/2022 */
/* This program converts First and Last name to Last, F. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	char c;
	char first;
	printf("Enter a first and last name: ");
	scanf(" %c", &first);
	while((c = getchar()) != ' ');
	while((c = getchar()) != '\n'){
		putchar(c);
	}
	printf(", %c.\n", first);
	return 0;
}
