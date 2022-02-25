/* 01/26/2022 */
/* This program takes in a series of numbers and outputs the sum */ 

#include <stdio.h>

int main(void){
	int sum = 0;
	int n;
	printf("This program sums a series of integers.\nEnter integers (0 to terminate): ");
	scanf("%d", &n);
	while(n != 0){
		sum+=n;
		scanf("%d", &n);
	}
	printf("The sum is: %d\n",sum);
	return 0;
}
