/* 02/27/2022 */
/* Reduces fractions using structs. */

#include <stdio.h>

struct fraction{
	int numerator;
	int denominator;
} f1, f2;

void reduce_fraction(struct fraction *f);

int main(void){
	printf("Enter numerator/denominator: ");
	scanf("%d/%d", &f1.numerator, &f1.denominator);
	reduce_fraction(&f1);
	printf("REDUCED: %d/%d", f1.numerator, f1.denominator);
	return 0;
}

void reduce_fraction(struct fraction *f){
	int temp = 0;
	int numerator = f->numerator, denominator = f->denominator;
	while(numerator!=0){
		temp = numerator;
		numerator = denominator%numerator;
		denominator = temp;
	}
	f->numerator = f->numerator/denominator;
	f->denominator = f->denominator/denominator;
}
