/* 01/24/2022 */
/* UPC code checker */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int first, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, code, check_digit;
	printf("Enter the first (single) digit: ");
	scanf("%d", &first);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
	printf("Enter the check digit: ");
	scanf("%d", &check_digit);

	int calculation = first+i2+i4+j1+j3+j5;
	int calculation_two = i1+i3+i5+j2+j4;
	calculation_two += calculation * 3;
	calculation_two -= 1;

	if(check_digit == 9-(calculation_two%10)){
		printf("VALID\n");
	}
	else{
		printf("INVALID\n");
	}
	return 0;
}
