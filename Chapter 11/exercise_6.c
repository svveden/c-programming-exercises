/* 02/18/2022 */
/* This program outputs the larget and second largest items in an array. */

#include <stdlib.h>
#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void){
	int a[] = {11, 10, 5, 9, 1, 0, 4, 3, 6}, n = 9, largest, second_largest;
	find_two_largest(a, n, &largest, &second_largest);
	printf("Largest: %d\nSecond Largest: %d\n", largest, second_largest);
	return 0;	
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	if(a[0] > a[1]){
		*largest = a[0];
		*second_largest = a[1];
	} else{
		*largest = a[1];
		*second_largest = a[0];
	}
	for(int i = 2; i < n; i++){
		if(a[i] > *largest){
			*second_largest = *largest;
			*largest = a[i];
		}
		else if(a[i] > *second_largest){
			*second_largest = a[i];
		}
	}
}
