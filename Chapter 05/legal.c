/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 01/25/2022 */
/* This program converts given date to "legal" format using switch statements */

#include <stdio.h>

int main(void){
	int month, day, year;
	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Dated this ");

	switch(day){
		case 1: case 21: case 31: printf("%dst", day);
		break;
		case 2: case 22: printf("%dnd", day);
		break;
		case 3: case 23: printf("%drd", day);
		break;
		default: printf("%dth", day);
	}

	printf(" day of ");

	switch(month){
		case 1: printf("January, 20%.2d.\n", year);
		break;
		case 2: printf("Feburary, 20%.2d.\n", year);
		break;
		case 3: printf("March, 20%.2d.\n", year);
		break;
		case 4: printf("April, 20%.2d.\n", year);
		break;
		case 5: printf("May, 20%.2d.\n", year);
		break;
		case 6: printf("June, 20%.2d.\n", year);
		break;
		case 7: printf("July, 20%.2d.\n", year);
		break;
		case 8: printf("August, 20%.2d.\n", year);
		break;
		case 9: printf("September, 20%.2d.\n", year);
		break;
		case 10: printf("October, 20%.2d.\n", year);
		break;
		case 11: printf("November, 20%.2d.\n", year);
		break;
		case 12: printf("December, 20%.2d.\n", year);
		break;
		default: printf("Illegal month");
		break;
	}

}
