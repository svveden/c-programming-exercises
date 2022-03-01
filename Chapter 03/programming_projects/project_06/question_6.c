/* 01/24/2022 */
/* This program takes addfrac.c from the textbook and modifies it to take in both fractions at once. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1,&num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}
