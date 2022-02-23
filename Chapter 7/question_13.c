/* 01/27/2022 */
/* This program finds the average size of words in a sentence,. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	char c;
	float letters = 0.0f, words = 1.0f;
	printf("Enter a sentence: ");
	while((c=getchar()) != '\n'){
		if(c == ' '){
			words++;
		}else{
			letters += 1.0f;
		}
	} printf("Average word length: %.1f\n", letters/words);
	return 0;
}
