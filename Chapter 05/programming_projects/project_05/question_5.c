/* 01/25/2022 */
/* This program calculates tax payment based of given tax numbers. */

#include <stdio.h>

int main(void){
	float income;
	float tax;
	printf("Enter taxable income: ");
	scanf("%f", &income);
	if(income < 750.00f){
		tax = income * 0.01f;
	} else if(income <= 2250.00f){
		tax = (income * 0.02f) + 7.50f;
	} else if(income <= 3750.00f){
		tax = (income * 0.03f) + 37.50f;
	} else if(income <= 5250.00f){
		tax = (income * 0.04f) + 82.50f;
	} else if(income <= 7000.00f){
		tax = (income * 0.05f) + 142.50f;
	} else {
		tax = (income * 0.06f) + 230.00f;
	}
	printf("Tax due: %.2f\n", tax);
}
