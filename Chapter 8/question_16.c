/* 02/10/2022 */
/* Tests if two words are anagrams */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
	char letters[26] = {0}, c;
	bool anagram = true;
	printf("Enter first word: ");
	while((c = getchar()) != '\n'){
		c = toupper(c)-65;
		letters[c]+=1;
	}
	printf("Enter second word: ");
	while((c = getchar()) != '\n'){
		c = toupper(c)-65;
		letters[c]-=1;
	}
	for(int i = 0; i<26; i++){
		if(letters[i] != 0){
			anagram = false;
		}
	}
	if(anagram){
		printf("The words are anagrams.\n");
	} else{
		printf("The words are not anagrams.\n");
	}
	
	return 0;
}
