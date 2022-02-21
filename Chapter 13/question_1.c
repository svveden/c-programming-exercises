/* 02/21/2022 */
/* This program takes in animal names as strings and outputs the smallest and largest (positional wise in a dictionary). */

#include <stdio.h>
#include <string.h>
#define WORD_LEN 20

int main(void){
	char word[WORD_LEN+1], smallest_word[WORD_LEN+1], largest_word[WORD_LEN+1];
	printf("Enter word: ");
	scanf("%s", smallest_word);
	strcpy(largest_word, smallest_word);
	while(1){
		printf("Enter word: ");
		scanf("%s", word);
		if(strcmp(word, smallest_word) < 0){
			strcpy(smallest_word, word);
		} else if(strcmp(word, largest_word) > 0){
			strcpy(largest_word, word);
		}
		if(strlen(word) == 4){
			break;
		}

	}
	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
}
