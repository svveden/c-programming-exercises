/* 02/10/2022 */
/* Tests if two words are anagrams */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(char counts[26]){
	char c;
	while((c = getchar()) != '\n'){
		c = toupper(c)-65;
		counts[c]+=1;
	}
}

bool equal_array(char counts1[26], char counts2[26]){
	bool anagram = false;
	for(int i = 0; i<26; i++){
		if(counts1[i] == counts2[i]){
			anagram = true;
		} else{
			return false;
		}
	} return anagram;
}

int main(void){
	char word1[26] = {0}, word2[26] = {0};
	printf("Enter first word: ");
	read_word(word1);
	printf("Enter second word: ");
	read_word(word2);
	if(equal_array(word1, word2)){
		printf("The words are anagrams.\n");
	} else{
		printf("The words are not anagrams.\n");
	}
	return 0;
}
