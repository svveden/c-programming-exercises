/* 02/28/2022 */
/* Polynomial */

#include <stdio.h>
#include <math.h>

int main(void){
	int x;
	printf("Enter the value for x: ");
	scanf("%d", &x);
	printf("%.0f", (3*pow(x,5)+(2*pow(x,4))-(5*pow(x,3))-(x*x)+(7*x)-6));
}