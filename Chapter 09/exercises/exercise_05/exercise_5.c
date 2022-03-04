/* 02/14/2022 */
/* This program uses recursion to determine number of digits in a number. */

#include <stdio.h>
#include <stdlib.h> 

int num_of_digits(int digit, int count){
	if(digit == 0){
		return printf("%d", count);
	} else{
		return num_of_digits(digit/10, ++count);
	}
}

int main(void){
	int digit, count = 0;
	printf("Enter number to get number of digits: ");
	scanf("%d", &digit);
	num_of_digits(digit, count);
	return 0;
}
