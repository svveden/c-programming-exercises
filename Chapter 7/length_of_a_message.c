/* 01/27/2022 */
/* This program outputs the length of an inputted message */

#include <stdio.h>

int main(void){
	int i = 0;
	printf("Enter a message: ");
	while(getchar() != '\n'){
		i++;
	}
	printf("You message was %d character(s) long.\n", i);
	return 0;
}
