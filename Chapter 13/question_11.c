/* 02/22/2022 ;) */
/* This program finds the average size of words in a sentence,. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double compute_average_word_length(const char *sentence){
	const char *p = sentence;
	float words = 1.0f, letters = 0.0f;
	while(*p){
		if(*p++ == ' '){
			words++;
		}else{
			letters += 1.0f;
		}
	} return letters/words;
}
int main(void){
	char sentence[99];
	printf("Enter a sentence: ");
	fgets(sentence, sizeof(sentence), stdin);
	sentence[sizeof(sentence)-1] = '\0';
	compute_average_word_length(sentence);
	printf("Average word length: %.1f\n", compute_average_word_length(sentence));
	return 0;
}
