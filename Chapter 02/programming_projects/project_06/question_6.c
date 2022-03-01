/* 02/28/2022 */
/* Horner's Rule */

#include <stdio.h>
#include <math.h>

int main(void){
	int x;
	printf("Enter the value for x: ");
	scanf("%d", &x);
	printf("%d", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
}