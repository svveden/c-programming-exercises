/* 01/25/2022 */
/* This program takes in 4 numbers separated by spaces and gives the smallest and largers numbers. */

#include <stdio.h>

int main(void){
	int a,b,c,d,smallest1,largest1, smallest2, largest2;
	printf("Enter four integers: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b){
		largest1 = a;
		smallest1 = b;
	}
	else{
		largest1 = b;
		smallest1 = a;
	}
	if(c>d){
		largest2 = c;
		smallest2 = d; 
	}
	else{
		largest2 = d;
		smallest2 = c;
	}
	if(largest1>largest2){
		printf("largest: %d\n", largest1);
	}
	else{
		printf("largest: %d\n", largest2);
	}
	if(smallest1>smallest2){
		printf("smallest: %d\n", smallest2);
	}
	else{
		printf("smallest: %d\n", smallest1);
	}
	return 0;
}
