/* 01/27/2022 */
/* This program takes in two fractions and outputs the answer of the desired math. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1, denom1, num2, denom2, result_num, result_denom;
	char symbol;
	printf("Enter two fractions separated by a +, -, * or /: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &symbol, &num2, &denom2);
	if(symbol == '+'){
		result_num = num1 * denom2 + num2 * denom1; 
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d\n", result_num, result_denom);
	}
	else if(symbol == '-'){
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The difference is %d/%d\n", result_num, result_denom);
	}
	else if(symbol == '*'){
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		printf("The product is %d/%d\n", result_num, result_denom);
	}
	else if(symbol == '/'){
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
		printf("The answer is %d/%d\n", result_num, result_denom);
	}

	return 0;
}
