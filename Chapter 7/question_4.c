/* 01/27/2022 */
/* This program converts given alpahbetic phone number to numerical */ 

#include <stdio.h>

int main(void){
	char num;
	printf("Enter phone number: ");
	num = getchar();
	while(num != '\n'){
			switch(num){
				case 'A':
				case 'B':
				case 'C':
					putchar('2');
					break;
				case 'D':
				case 'E':
				case 'F':
					putchar('3');
					break;
				case 'H':
				case 'I':
				case 'J':
					putchar('4');
					break;
				case 'K':
				case 'L':
				case 'M':
					putchar('5');
					break;
				case 'N':
				case 'O':
				case 'P':
					putchar('6');
					break;
				case 'Q':
				case 'R':
				case 'S':
					putchar('7');
					break;
				case 'T':
				case 'U':
				case 'V':
					putchar('8');
					break;
				case 'W':
				case 'X':
				case 'Y':
					putchar('9');
					break;
				default: putchar(num);
					break;
			}
		num = getchar();
	}
	printf("\n"); 
	return 0;
}
