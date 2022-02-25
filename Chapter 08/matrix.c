/* 01/28/2022 */
/* This program takes in a size and creates a matrix of that size with the diagonal "x'ed" out */

#include <stdio.h>

int main(void){
	int size;
	printf("Enter an array size: ");
	scanf("%d", &size);
	char a[size][size];
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(i == j){
				a[i][j] = 'x';
			} else{
				a[i][j] = 'a';
			}
		}
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			printf("%c\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
