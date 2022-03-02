/* 01/26/2022 */
/* This program takes in a series of numbers until 0 or a negative number is input,  */
/* then returns the largest of the numbers.											 */

#include <stdio.h>

int main(void){
	float num;
	float largest = 0;
	for(;;){
		printf("Enter a number: ");
		scanf("%f", &num);
		if(num>0){
			if(largest == 0){
				largest = num;
			}
			else if(num>largest){
				largest=num;
			}
		} else{
			printf("The largest numbered entered was %.2f\n",largest);
			return 0;
		}
	}
	return 0;
}
