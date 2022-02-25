/* 02/14/2022 */
/* This program finds the digit in the position given for a given number. */

#include <stdio.h>
#include <stdlib.h> 

int num_of_digits(int digit, int count){
	if(digit == 0){
		return count;
	} else{
		return num_of_digits(digit/10, ++count);
	}
}

int digit(int digit, int k){
	int ans;
	if(k > num_of_digits(digit, 0)){
		return 0;
	} else {
		for(int i = 0; i < k; i++){
			ans = digit%10;
			digit = digit/10;
		}
		return printf("%d",ans);
	}
}

int main(void){
	int num, k;
	printf("Enter number and position from the right: ");
	scanf("%d %d", &num, &k);
	digit(num, k);
	return 0;
}
