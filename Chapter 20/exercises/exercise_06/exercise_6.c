#include <ctype.h>
#include <stdio.h>

unsigned short swap_bytes(unsigned short i){
	unsigned short l, h, ans;
	h = i << 8;	
	l = i >> 8;
	return h|l;
}

int main(void){
	unsigned short i;
	printf("Enter a hexadecimal number: ");
	scanf("%hx", &i);
	printf("Number with bytes swapped: %hx\n", swap_bytes(i));
	return 0;
}