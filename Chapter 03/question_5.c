/* 01/24/2022 */
/* This program takes in 1-16 written in any order and outputs them in a 4x4 matrix with additional calculations*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
	printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
	printf("Row sums: %d %d %d %d\n", a+b+c+d,e+f+g+h,i+j+k+l,m+n+o+p);
	printf("Column sums: %d %d %d %d\n", a+e+i+m,b+f+j+n,c+g+k+o,d+h+l+p);
	printf("Diagonal sums: %d %d\n", a+f+k+p, d+g+j+m);
	return 0;
}
