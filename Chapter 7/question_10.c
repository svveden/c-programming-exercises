/* 01/27/2022 */
/* This program counts the number of vowels in a sentence. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	int vowels = 0;
	char letter;
	printf("Enter a sentence: ");
	while((letter = getchar()) != '\n'){
		letter = toupper(letter);
		switch(letter){
			case 'A': case 'E': case 'I': case 'O': case 'U': vowels += 1;
			default: 
				break;
		}
	}
	printf("Your sentence contains %d vowels.\n", vowels);
	return 0;
}
