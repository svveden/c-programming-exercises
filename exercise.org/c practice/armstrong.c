/* 01/24/2022 */
/* This program calculates whether a given number is an armstrong number */

#include <stdio.h>
#include <math.h>

int digits(int num){
	int num_of_digits = 1;
	while(num > 9){
		num /= 10;
		num_of_digits++;
	} return num_of_digits;
}

int main(void){
	int num;
	printf("Input num: ");
	scanf("%d", &num);
	int num_of_digits = digits(num);
	int temp_num = num;
	int total = 0;
	for(int x=0;x<=num_of_digits;x++){
		while(num>0){
			temp_num = temp_num % 10;
			total += pow(temp_num,num_of_digits);
			num = num/10;
			temp_num = num;
		}
	}
	if(total == num){
		printf("%d is an Armstrong number!\n", num);
	}
	else{
		printf("%d is not an Armstrong number.\n", num);
	}
}
