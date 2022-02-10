/* 02/10/2022 */
/* Reverses a sentence. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char sentence[99] = {' '};
	char punctuation, c;
	int i = 0, j = 0;
	printf("Enter a sentence: ");
	while((c = getchar()) != '!' && c != '?' && c != '.'){
		sentence[i] = c;
		i++;
	}
	if(c == '!' || c == '?' || c == '.'){
		punctuation = c;
	}
	printf("Reversal of sentence: ");
	for(i = 0, j = (int)(sizeof(sentence)/sizeof(sentence[0])); j >= 0; j--){
		if(sentence[j] == ' '){
			i = j+1;
			while(sentence[i] != ' ' && sentence[i] != punctuation && i < 99){
				printf("%c", sentence[i]);
				i++;
			} printf(" ");
		} else if(j == 0){
				i = j;
				while(sentence[i] != ' ' && sentence[i] != punctuation){
					printf("%c", sentence[i]);
					i++;
				}
			}
	}
	printf("%c\n", punctuation);
	return 0;
}
