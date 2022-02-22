/* 02/22/2022 ;) */
/* This program counts the number of vowels in a sentence. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

int compute_vowel_count(const char *sentence);

int main(void){
	int vowels = 0;
	char sentence[50];
	printf("Enter a sentence: ");
	fgets(sentence, 50, stdin);
	vowels = compute_vowel_count(sentence);
	printf("Your sentence contains %d vowels.\n", vowels);
	return 0;
}

int compute_vowel_count(const char *sentence){
	int vowels = 0;
	for(const char *p = sentence; p < sentence+strlen(sentence); p++){
		int letter = toupper(*p);
		switch(letter){
			case 'A': case 'E': case 'I': case 'O': case 'U': vowels += 1;
			default: 
				break;
		}
	} return vowels;
}
