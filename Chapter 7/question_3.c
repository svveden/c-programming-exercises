/* 01/27/2022 */
/* This program takes in a series of numbers and outputs the sum */ 

#include <stdio.h>

int main(void){
	double sum = 0;
	double n;
	printf("This program sums a series of integers.\nEnter integers (0 to terminate): ");
	scanf("%lf", &n);
	while(n != 0){
		sum+=n;
		scanf("%lf", &n);
	}
	printf("The sum is: %.0f\n",sum);
	return 0;
}
