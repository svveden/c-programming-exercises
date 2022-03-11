/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

#include <stdio.h>
#define YEARS 5

int main(void){
	int year, x = 0;
	float interest;
	float cash = 100.00f;
	float rate[YEARS] = {0};
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter the number of years: ");
	scanf("%d", &year);
	printf("Years \t %.0f %% \t%.0f %% \t%.0f %% \t%.0f %% \t%.0f %% \n",interest,interest+1,interest+2,interest+1,interest+4);
	interest /= 100;
	printf("1\t");
	for(int i = 0; i < YEARS; i++){
		rate[i] = cash + cash*interest;
		interest+=0.01;
		printf("%.2f\t",rate[i]);
	}
	printf("\n");
	while(x < year-1){
		interest-=0.05;
		printf("%d\t", x+2);
		for(int j = 0; j < YEARS; j++){
			rate[j] = rate[j]*interest + rate[j];
			interest+=0.01;
			printf("%.2f\t", rate[j]);
		}
		x+=1;
		printf("\n");
	}

	return 0;
}
