/* 01/24/2022 */
/* This program computes the loan after payments */

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
	remaining = (loan - payment);
	remaining += loan * interest_rate;
	printf("Balance remaining after first payment: %.2f\n", remaining);
	loan = remaining;
	remaining = (loan - payment);
	remaining += loan * interest_rate;
	printf("Balance remaining after second payment: %.2f\n", remaining);
	loan = remaining;
	remaining = (loan - payment);
	remaining += loan * interest_rate;
	printf("Balance remaining after third payment: %.2f\n", remaining);
	return 0;
}