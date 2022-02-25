/* 02/14/2022 */
/* This program uses recursion to calculate GCD of two numbers. */

#include <stdio.h>
#include <stdlib.h> 

int gcd(int n, int m){
	if(n == 0){
		return printf("%d is GCD", m);
	}
	else {
		return gcd(m%n, n);
	}
}

int main(void){
	int n, m;
	printf("Enter two numbers to find GCD: ");
	scanf("%d %d", &n, &m);
	gcd(n, m);
	return 0;
}
