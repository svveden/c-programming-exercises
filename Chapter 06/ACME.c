/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 01/26/2022 */
/* This program is a balancing checkbook application */
#include <stdio.h>

int main(void){
	float credit = 0.0f;
	float debit = 0.0f;
	float balance = 0.0f;
	int command = 0;

	for(;;){
		printf("*** ACME checkbook-balancing program ***\nCommands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
		printf("Enter command: ");
		scanf("%d", &command);
		switch(command){
			case 0:
				balance = 0.0f;
				printf("Balance cleared, current balance: %.2f\n", balance);
				break;
			case 1: 
				printf("Enter amount of credit: ");
				scanf("%f", &credit);
				balance += credit;
				break;
			case 2:
				printf("Enter amount of debit: ");
				scanf("%f", &debit);
				balance -= debit;
				break;
			case 3:
				printf("Current balance: %.2f\n", balance);
				break;
			case 4:
				printf("Exiting, Thank you for using ACME\n");
				return 0;
			default: printf("Invalid command.");
				break;
		}
		printf("\n");
	}
	return 0;
}
