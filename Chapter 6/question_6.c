/* 01/26/2022 */
/* This program takes in a max height for squares, then computes all even squares between that number and 2 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter a number to compute even squares: ");
	scanf("%d", &num);
	for(int i = 2; i*i <= num; i+=2){
		if(i%2 == 0){
			printf("%d\n", i*i);
		}
	} return 0;
}
