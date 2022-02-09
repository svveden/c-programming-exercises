/*	02/09/2022 */
/* This program declares an array of 0s (besides the first two nums), then calculates the */
/* first 40 fibonacci numbers and puts them in the array. 	 							  */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	int fib_numbers[40] = {0, 1};
	printf("%d, %d, ", fib_numbers[0], fib_numbers[1]);
	for(int i = 2; i < 40; i++){
		fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2]; 
		printf("%d, ", fib_numbers[i]);
	}
	return 0;
}
