/* 01/25/2022 */
/* UPC code checker updated to take in whole code at once */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int first, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, code;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&first,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);

	int calculation = first+i2+i4+j1+j3+j5;
	int calculation_two = i1+i3+i5+j2+j4;
	calculation_two += calculation * 3;
	calculation_two -= 1;

	printf("Check code: %d\n", 9-(calculation_two%10));

	return 0;
}
