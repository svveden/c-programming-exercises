/* 02/18/2022 */
/* Sums a two dimensional array */
#include <stdio.h>

int sum_two_dimensional_array(const int a[][LEN], int n){
	int sum = 0;
	int *p;
	for(p = &a[0][0]; p <= &a[N-1][LEN-1]; p++){
		sum += *p;
	} return sum;
}
