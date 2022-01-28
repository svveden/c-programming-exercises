/* 01/28/2022 */
/* This program takes in 10 numbers and outputs the reverse using an array. */

#include <stdio.h>
#define N 10

int main(void){
	int a[N], i;
	printf("Enter ten numbers: ");
	for(i = 0; i<N; i++){
		scanf("%d", &a[i]);
	}
	printf("In reverse order: ");
	for(i = N-1; i >= 0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
