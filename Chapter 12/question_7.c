/* 02/19/2022 */
/* max_min using pointers. */

#include <stdio.h>
#include <stdlib.h>

void max_min(int *a, int n, int *max, int *min){
	int *p;
	*max = *min = *a;
	for (p = a; p < a + n; p++){
		if(*p > *max){
			*max = *p;
		} else if(*p < *min){
			*min = *p;
		}
	}
}
