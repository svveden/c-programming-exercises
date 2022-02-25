/* 01/24/2022 */
/* This program computes the loan after payments */
/* Currently not working, off by a few dollars, also only does one month not three */
/* Will come back to this later */

#include <stdio.h>

int main(void){
	float loan, interest_rate, payment;
	float remaining;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	interest_rate=interest_rate/100;
	interest_rate=interest_rate/12;
	remaining = (loan-payment)*interest_rate;
	remaining = remaining + (loan-payment);
	printf("Balance remaining after first payment: %.2f", remaining);
	return 0;
}
