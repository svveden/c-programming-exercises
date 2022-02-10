/* 02/10/2022 */
/* This program converts given alpahbetic phone number to numerical using arrays. */ 

#include <stdio.h>

int main(void){
	char num;
	int i = 0;
	char conv_num[15] = {0};
	printf("Enter phone number: ");
	while((num = getchar()) != '\n'){
		conv_num[i] = num;
		i++;
	}
	printf("In numeric form: ");
	for(int j = 0; j < 15; j++){
			switch(conv_num[j]){
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
				default: 
					putchar(conv_num[j]);
					break;
			}
		}
	printf("\n"); 
	return 0;
}
