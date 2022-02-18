/* 02/18/2022 */
/* This program finds the largest num in an array and returns it as a pointer. */

#include <stdlib.h>
#include <stdio.h>

int *find_largest(int a[], int n);

int main(void){
	int a[] = {1, 2, 3, 4, 5, 0, 6, 10, 11, 4};
	int n = sizeof(a)/sizeof(a[0]);
	printf("%d", *find_largest(a, n));
	return 0;
}

int *find_largest(int a[], int n){
	int *p = &a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > *p){
			p = &a[i];
		}
	} return p;
}
