/* 01/26/2022 */
/* Computes e. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, i, j;
	float e = 1.0f;
	printf("Enter number for approximating e: ");
	scanf("%d", &n);
	for(i=1,j=1;i<=n;i++){
		e += 1.0f / (j*=i);
	}
	printf("e: %f", e);
	return 0;
}
