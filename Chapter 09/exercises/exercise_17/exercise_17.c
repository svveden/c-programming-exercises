/* 02/14/2022 */
/* This program computes factorial without using recursion. */

#include <stdio.h>
#include <stdlib.h> 

int fact(int n){
	int sum = n;
	for(int i = 1; i < n; i++){
		sum *= n-i;
	} return sum;
}

int main(void){
	int num;
	printf("Enter number to get factorial: ");
	scanf("%d", &num);
	printf("%d\n", fact(num));
}
