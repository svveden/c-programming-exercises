/* 02/18/2022 */
/* This program takes in a fraction then outputs it in it's lowest form */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void){
	int num_1;
	int num_2;
	int frac_1;
	int frac_2;
	printf("Enter a fraction: ");
	scanf("%d/%d", &num_1, &num_2);
	reduce(num_1, num_2, &frac_1, &frac_2);
	printf("In lowest terms: %d/%d\n", frac_1, frac_2);
	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
	int temp;
	*reduced_numerator = numerator;
	*reduced_denominator = denominator;
	while(numerator!=0){
		temp = numerator;
		numerator = denominator%numerator;
		denominator = temp;
	}
	*reduced_numerator = (*reduced_numerator)/denominator;
	*reduced_denominator = (*reduced_denominator)/denominator;
}
