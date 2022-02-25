/* 02/14/2022 */
/* This program computes a[i] * b[i]. */

#include <stdio.h>
#include <stdlib.h> 

double inner_product(double a[], double b[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i] * b[i];
	} return sum;
}

int main(void){
	double a[] = {100, 200, 300, 400, 500};
	double b[] = {500, 400, 300, 200, 100};
	printf("Sum: %.2f\n", inner_product(a, b, 5));
	return 0;
}
