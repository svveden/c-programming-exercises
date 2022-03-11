/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 01/27/2022 */
/* This program outputs the length of an inputted message */

#include <stdio.h>

int main(void){
	int i = 0;
	printf("Enter a message: ");
	while(getchar() != '\n'){
		i++;
	}
	printf("You message was %d character(s) long.\n", i);
	return 0;
}
