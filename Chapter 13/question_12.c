/* 02/22/2022 ;)*/
/* Reverses a sentence. */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(void){
	char array[30][20];
	char punctuation, c;
	int i = 0, j = 0, words = 0;
	printf("Enter a sentence: ");
	while((c = getchar()) != '!' && c != '?' && c != '.'){
		while(c == ' '){
			c = getchar();
			i++;
			words++;
			j = 0;
		}
		array[i][j] = c;
		array[i][j+1] = '\0';
		j++;
	}
	if(c == '!' || c == '?' || c == '.'){
		punctuation = c;
	}

	printf("Reversal of sentence: ");
	for(j = words; j >= 0; j--){
		printf("%s ", array[j]);
	}
	printf("%c\n", punctuation);
	return 0;
}
