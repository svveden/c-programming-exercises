/*	02/09/2022 */
/* This program outputs how many times a digit shows up in a number */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	long num;
	int repeat[10] = {0};
	printf("Enter a number: ");
	scanf("%ld", &num);
	for(int i = 0; num > 0; i++){
		repeat[num%10] += 1;
		num /= 10;
	}
	printf("Digit:     0 1 2 3 4 5 6 7 8 9\n");
	printf("Occurenes: "); 
	for(int i = 0; i < 10; i++){
		printf("%d ", repeat[i]);
	}
	printf("\n");
	return 0;
}

