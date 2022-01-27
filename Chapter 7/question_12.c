/* 01/27/2022 */
/* This program takes in a expression of n length and calculates it evaluates from left to right. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	char c;
	float num_1, num_2;
	printf("Enter an expression: ");
	scanf("%f", &num_1);
	while(c != '\n'){
		c = getchar();
		if(c=='+'){
			scanf("%f", &num_2);
			num_1 = num_1+num_2;
		} else if(c == '-'){
			scanf("%f", &num_2);
			num_1 = num_1 - num_2;
		} else if(c == '*'){
			scanf("%f", &num_2);
			num_1 = num_1 * num_2;
		} else if(c == '/'){
			scanf("%f", &num_2);
			num_1 = num_1 / num_2;
		}
	} printf("Answer: %.2f", num_1);
	return 0;
}
