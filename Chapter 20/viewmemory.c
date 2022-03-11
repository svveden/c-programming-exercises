/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* Outputes bytes at given address */

#include <ctype.h>
#include <stdio.h>

typedef unsigned char BYTE;

int main(void){
	unsigned long addr;
	int i, n;
	BYTE *ptr;
	printf("Address of main function: %lx\n", (unsigned long int) main);
	printf("Address of addr variable: %lx\n", (unsigned long int) &addr);
	printf("\nEnter a (hex) address: ");
	scanf("%lx", &addr);
	printf("Enter number of bytes to view: ");
	scanf("%d", &n);
	printf("\n");
	printf(" Address			Bytes	     Characters\n");
	printf(" -------       ----------------------------  ----------\n");
	ptr = (BYTE *) addr;
	for(; n > 0; n-=10){
		printf("%8lX  ", (unsigned long int) ptr);
		for(i = 0; i < 10 && i < n; i++){
			printf("%.2X  ", *(ptr+i));
		}
		for(; i < 10; i++)
			printf("  ");
		printf("  ");
		for(i = 0; i < 10 && i < n; i++){
			BYTE ch = *(ptr + i);
			if(!isprint(ch)){
				ch = '.';
			} 
			printf("%c", ch);
		}
		printf("\n");
		ptr+=10;
	}
	return 0;
}