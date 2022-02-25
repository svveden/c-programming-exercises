/* 01/25/2022 */
/* This program takes in a number and computes it's octal. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	int octal[5] = {0,0,0,0,0};
	printf("Enter a number between 0 and 32767: ");
	scanf("%d",&num);
	for(int i = 4; i>=0; i--){
		octal[i] = num%8;
		num /= 8;
	}
	printf("In octal, your number is: ");
	for(int j = 0; j<5; j++){
		printf("%d", octal[j]);
	}
	printf("\n");
}
