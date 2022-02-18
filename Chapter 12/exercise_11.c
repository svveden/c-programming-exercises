/* 02/18/2022 */
/* Finds largest num of an array. */

#include <stdio.h>
#include <stdlib.h>

int find_largest(int *a, int n){
	int *p = a, max = 0;
	for(p = a; p < a + n; p++){
		if(*p > max){
			max = *p;
		}
	}return max;
}
