/* 01/26/2022 */
/* This program takes in a fraction then outputs it in it's lowest form */

#include <stdio.h>

int main(void){
	int num_1;
	int num_2;
	int frac_1;
	int frac_2;
	int temp;
	printf("Enter a fraction: ");
	scanf("%d/%d", &num_1, &num_2);
	frac_1 = num_1;
	frac_2 = num_2;
	while(num_1!=0){
		temp = num_1;
		num_1 = num_2%num_1;
		num_2 = temp;
	}
	frac_1 = frac_1/num_2;
	frac_2 = frac_2/num_2;
	printf("In lowest terms: %d/%d\n", frac_1, frac_2);
	return 0;
}
