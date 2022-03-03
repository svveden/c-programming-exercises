/* 01/27/2022 */
/* This program uses Newton's method to compute the square root of a positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MINI 0.00001

int main(void){
	double n, y = 1.0, x = 0.0, avg = 1.0, t = 2.0;
	printf("Enter a positive number: ");
	scanf("%lf", &n);
	do{
		y = avg;
		x = n/y;
		avg = (y+x)/t;
	}while(fabs(avg-y) > MINI * y);
	printf("Square root: %f", avg);
	return 0;
}
