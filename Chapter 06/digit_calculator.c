/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 01/26/2022 */
/* This program takes in a number and outputs the number of digits it has. */ 

#include <stdio.h>

int main(void){
	int num;
	int i = 0;
	printf("Enter a nonnegative integer: ");
	scanf("%d", &num);
	do {
		num=num/10;
		i++;
	} while(num != 0);
	printf("The number has %d digits\n", i);
	return 0;
}
