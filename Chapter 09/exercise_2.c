/* 02/14/2022 */
/* This program creates a simple function for checking if x and y are between 0 and n-1 */

#include <stdio.h>
#include <stdlib.h> 

int check(int x, int y, int n){
	return (x >= 0 && x <= n-1 && y >= 0 && y <= n-1);
}

int main(void){
	int x = 2, y = 1, n = 4;
	printf("%d", check(x,y,n));
	return 0;
}
