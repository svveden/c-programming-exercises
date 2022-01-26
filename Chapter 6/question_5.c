/* 01/26/2022 */
/* This program takes in a number and outputs the reversal of that number */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	int digits;
	printf("Enter a number: ");
	scanf("%d", &num);
	do{
		printf("%d",num%10);
		num /= 10;
	} while(num!=0);
}
