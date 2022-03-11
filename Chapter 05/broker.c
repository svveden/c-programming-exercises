/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 01/25/2022 */
/* This program calculates a brokerage's percentage of commission based on price */

#include <stdio.h>

int main(void){
	float trade;
	float commission = 0;
	printf("Enter value of trade: ");
	scanf("%f", &trade);

	if(trade < 2500){
		commission += 30 + (trade * .017);
	}
	else if(trade < 6250){
		commission += 56 + (trade * 0.0066);
	}
	else if(trade < 20000){
		commission += 76 + (trade * 0.0034);
	}
	else if(trade < 50000){
		commission += 100 + (trade * 0.0022);
	}
	else if(trade < 500000){
		commission += 155 + (trade * 0.0011);
	}
	else {
		commission += 255 + (trade * 0.0009);
	}

	if(commission < 39.00f){
		commission = 39.00f;
	}
	printf("$%.2f\n", commission);
}
