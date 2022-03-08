#include <stdio.h>
#include <ctype.h>

unsigned int rotate_left(unsigned int i, int n){
	return (i << n) | (i >> (sizeof(int) * 8) - n);
}

unsigned int rotate_right(unsigned int i, int n){
	return (i >> n) | (i << (sizeof(int) * 8) - n);
}

int main(void){
	unsigned int i;
	int n;
	printf("Enter hex to be shifted:");
	scanf("%x", &i);
	printf("Number of shifts: ");
	scanf("%d", &n);
	printf("%x\n", rotate_left(i, n));
	printf("%x\n", rotate_right(i, n));
}