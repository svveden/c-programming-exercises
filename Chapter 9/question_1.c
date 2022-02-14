/* 02/14/2022 */
/* This program sorts an array using selection sort. */

#include <stdio.h>
#include <stdlib.h> 

int selection_sort(int a[], int n){
	int largest = a[0], pos = 0, temp = 0;

	if(n==0){
		return 0;
	}

	for(int i = 0; i < n; i++){
		if(a[i] > largest){
			largest = a[i];
			pos = i;
		}
	} 
	temp = a[n-1];
	a[n-1] = largest;
	a[pos] = temp;
	return selection_sort(a, n-1);
}

int main(void){
	int len, c, i;
	printf("Enter the length of array to be sorted: ");
	scanf("%d", &len);
	int a[len];
	printf("Enter array of length %d: ", len);
	for(int i = 0; i < len; i++){
		scanf("%d", &a[i]);
	}
	selection_sort(a, len);

	for(int j = 0; j < len; j++){
		printf("%d ", a[j]);
	} printf("\n");
	return 0;
}
