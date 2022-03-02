/* 01/25/2022 */
/* Calculates how many digits a number has assuming its less than 5 digits using ternary statements. */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	int n = 0;
	int d = 0;
	printf("Enter a n: ");
	scanf("%d", &n);

	n>0&&n<10?d++:n>9&&n<100?d+=2:n>99&&n<1000?d+=3:n>999&&n<10000?d+=4:d--;
	printf("The number %d has %d digits!\n", n, d);

	return 0;

}
