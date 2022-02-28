/* 01/24/2022 */
/* This program asks for amount of money then calculates tax of 5% */

#include <stdio.h>
#define TAX_AMOUNT 0.05f

int main(void){
	printf("Next, please enter a dollar and cents amount to determine your tax: ");
	float amount = 0;
	scanf("%f", &amount);
	amount = amount + amount * TAX_AMOUNT;
	printf("Your taxed amount is now: %.2f\n\n", amount);
	return 0;
}

