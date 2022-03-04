/* 02/14/2022 */
/* This program finds the largest num, average num, and amount of positive nums in an array. */

#include <stdio.h>
#include <stdlib.h> 

int largest(int a[], int n){
	int large = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > large){
			large = a[i];
		}
	} return large;
}

int average(int a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	} return sum/n;
}

int positive(int a[], int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(a[i] >= 0){
			count+=1;
		}
	} return count;
}
int main(void){
	int a[8] = {1, 2, 5, -1, 2, 6, 3, 4};
	printf("Largest: %d\n", largest(a, 8));
	printf("Average: %d\n", average(a, 8));
	printf("Positive numbers: %d\n", positive(a, 8));
	return 0;
}
