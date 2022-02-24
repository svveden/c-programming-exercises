/* 02/23/2022 */
/* Anagram tester. */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stdbool.h>
#include <ctype.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void){
	char word1[25], word2[25];
	printf("Enter first word: ");
	scanf("%s", word1);
	printf("Enter second word: ");
	scanf("%s", word2);
	if(are_anagrams(word1, word2)){
		printf("The words are anagrams.");
	} else{
		printf("The words are not anagrams.");
	}
	return 0;
}

bool are_anagrams(const char *word1, const char *word2){
	const char *p = word1, *q = word2;
	char letters[26] = {0}, *k = letters;
	while(*p){
		letters[(toupper(*p++)-65)]+=1;
	}
	while(*q){
		letters[(toupper(*q++)-65)]-=1;
	}

	while(k < letters+26){
		if(*k++ != 0){
			return false;
		}
	}
	return true;
}