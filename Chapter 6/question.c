/* 01/26/2022 */
/* This program takes in two numbers and computes their GCD */

#include <stdio.h>

int main(void){
	int num_1;
	int num_2;
	int temp;
	printf("Enter two integers: ");
	scanf("%d %d", &num_1, &num_2);
	while(num_1!=0){
		temp = num_1;
		num_1 = num_2%num_1;
		num_2 = temp;
	}
	printf("Greatest common divisor: %d\n", num_2);
	return 0;
}
