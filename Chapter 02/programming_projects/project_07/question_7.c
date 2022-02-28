/* 01/24/2022 */
/* This program computes the amount of bills for each bill type needed to make total */

#include <stdio.h>

int main(void){
	int dollar = 0;
	int twenty,ten,five,one,remainder;
	printf("Please enter dollar amount: ");
	scanf("%d", &dollar);
	twenty = dollar/20;
	remainder = dollar-twenty*20;
	ten = remainder/10;
	remainder = remainder-ten*10;
	five = remainder/5;
	remainder = remainder-five*5;
	one = remainder/1;
	printf("Twenties: %d\n", twenty);
	printf("Tens: %d\n", ten);
	printf("Fives: %d\n", five);
	printf("Ones: %d\n\n", one);
	return 0;
}
