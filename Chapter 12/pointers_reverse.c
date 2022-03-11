/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 02/18/2022 */
/* This program takes in 10 numbers and outputs the reverse using an pointers and arrays. */

#include <stdio.h>
#define N 10

int main(void){
	int a[N], i, *p;
	printf("Enter ten numbers: ");
	for(p = a; p < a + N; p++){
		scanf("%d", p);
	}
	printf("In reverse order: ");
	for(p = a + N - 1; p >= a; p--){
		printf("%d ", *p);
	}
	printf("\n");
	return 0;
}
