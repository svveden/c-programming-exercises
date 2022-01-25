/* 01/25/2022 */
/* This program takes in a three digit number and outputs the reversal of that number without arithmetic. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num, num2, num3;
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d",&num,&num2,&num3);
	printf("The reversal is: %d%d%d\n",num3,num2,num);
}
