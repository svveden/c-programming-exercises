/* 02/15/2022 */
/* Computes power */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int x, int n){
	int i;
	if(n == 0){
		return 1;
	}
	if(n % 2 == 0){
		i = power(x, n/2);
		return i*i;
	} else{
		return x * power(x, n-1);
	}
}

int main(void){
	int x, n;
	printf("Enter value for x and n: ");
	scanf("%d %d", &x, &n);
	printf("%d", power(x, n));
	return 0;
}
