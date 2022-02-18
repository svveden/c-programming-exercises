/* 02/18/2022 */
/* This program swaps two values using pointers */

#include <stdlib.h>
#include <stdio.h>

void swap(int *p, int *q);

int main(void){
	int i = 6, j = 9;
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	swap(&i, &j);
	printf("i = %d\n", i);
	printf("j = %d\n", j);
}

void swap(int *p, int *q){
	int temp;
	temp = *q;
	*q = *p;
	*p = temp;
}
