/* 02/18/2022 */
/* Finds largest and second largest of an array. */

#include <stdio.h>
#include <stdlib.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
	const int *p = a;
	if(*p > *++p){
		*largest = *p;
		*second_largest = *++p;
	} else{
		*second_largest = *p;
		*largest = *++p;
	}
	for(p = a; p < a + n; p++){
		if(*largest < *p){
			*second_largest = *largest;
			*largest = *p;
		} else if(*p > *second_largest){
			*second_largest = *p;
		}
	}
}

int main(void){
	int a[] = {10, 9, 3, 4, 5, 6, 7, 8, 9};
	int largest, second_largest;
	find_two_largest(a, 9, &largest, &second_largest);
	printf("%d", largest);
	printf("\n%d", second_largest);
}
