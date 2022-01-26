/* 01/26/2022 */
/* Computes e. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	float e = 1;
	printf("Enter number for approximating e: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=i; j>0; j--){
			e += 1/i*j;
		}
		test = 0;
	}
	printf("e: %f", e);
	return 0;
}
