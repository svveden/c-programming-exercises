/* 01/25/2022 */
/* This program takes in a three digit number and outputs the reversal of that number */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter a three digit number: ");
	scanf("%d", &num);
	printf("The reversal is: %d%d%d\n",num%10,num/10%10,num/100);
}
