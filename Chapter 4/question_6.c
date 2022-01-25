/* 01/25/2022 */
/* EAN code checker updated to take in whole code at once */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, code;
	printf("Enter the first 13 digits of a EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);

	int calculation = i2+i4+i6+i8+i10+i12;
	int calculation_two = i1+i3+i5+i7+i9+i11;
	calculation_two += calculation * 3;
	calculation_two -= 1;

	printf("Check code: %d\n", 9-(calculation_two%10));

	return 0;
}
