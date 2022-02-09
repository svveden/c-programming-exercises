/*	02/09/2022 */
/* This program checks for repeated numbers, then outputs which numbers are repeating*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
	long num;
	bool repeat[10] = {false};
	bool repeated[10] = {false};
	printf("Enter a number: ");
	scanf("%ld", &num);
	for(int i = 0; num > 0; i++){
		if(!repeat[num % 10]){
			repeat[num % 10] = true;
		}
		else{
			repeated[num%10] = true;
		}
		num /= 10;
	}
	printf("Repeated digit: "); 
	for(int i; i < 10; i++){
		if(repeated[i]){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
