/* 02/15/2022 */
/* Computes the polynomial: 3x^5+2x^4-5x^3-x^2+7x-6 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double polynomial(int x){
	return printf("%.0f\n",((3*pow(x,5))+(2*pow(x,4))-(5*pow(x,3))-(pow(x,2))+(7*x)-6));
}

int main(void){
	int x;
	printf("Enter value for x to solve polynomial: ");
	scanf("%d", &x);
	polynomial(x);
	return 0;
}
