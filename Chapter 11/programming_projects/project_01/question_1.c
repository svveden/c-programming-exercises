/* 02/18/2022 */
/* This program computes the amount of bills for each bill type needed to make total */

#include <stdio.h>

void pay_amount(int dollar, int *twenty, int *ten, int *five, int *one);

int main(void){
	int dollar = 0;
	int twenty,ten,five,one;
	printf("Please enter dollar amount: ");
	scanf("%d", &dollar);
	pay_amount(dollar, &twenty, &ten, &five, &one);
	printf("Twenties: %d\n", twenty);
	printf("Tens: %d\n", ten);
	printf("Fives: %d\n", five);
	printf("Ones: %d\n\n", one);
	return 0;
}

void pay_amount(int dollar, int *twenty, int *ten, int *five, int *one){
	int remainder;
	*twenty = dollar/20;
	remainder = dollar-(*twenty)*20;
	*ten = remainder/10;
	remainder = remainder-(*ten)*10;
	*five = remainder/5;
	remainder = remainder-(*five)*5;
	*one = remainder/1;
}
