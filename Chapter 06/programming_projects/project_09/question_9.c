/* 03/02/2022 */
/* This program computes the loan after x amount of payments */

#include <stdio.h>

float balance_calculator(float loan, float interest_rate, float payment){
	float remaining_balance = (loan - payment);
	remaining_balance += (loan * interest_rate);
	return remaining_balance;
}

int main(void){
	float loan, interest_rate, payment;
	int months;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	printf("Enter number of months: ");
	scanf("%d", &months);
	interest_rate=interest_rate/100;
	interest_rate=interest_rate/12;
	for(int i = 0; i < months; i++){
		loan = balance_calculator(loan, interest_rate, payment);
		printf("Balance remaining after %d payment: %.2f\n", i+1, loan);
	}
	return 0;
}