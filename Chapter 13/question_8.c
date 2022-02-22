/* 02/22/2022 ;) */
/* This program calculates scrabble value of inputted word */ 

#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int compute_scrabble_value(const char *word);

int main(void){
	char word[20];
	int sum = 0;
	printf("Enter a word: ");
	scanf("%s", word);
	sum = compute_scrabble_value(word);
	printf("Scrabble value: %d\n", sum);
	return 0;
}

int compute_scrabble_value(const char *word){
	int sum = 0;
	int letter;
	for(int i = 0; i < strlen(word); i++){
		letter = toupper(word[i]);
			switch(letter){
				case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R':
				case 'S': case 'T': case 'U': sum+=1;
					break;
				case 'D': case 'G': sum+=2;
					break;
				case 'B': case 'C': case 'M': case 'P': sum+=3;
					break;
				case 'F': case 'H': case 'V': case 'W': case 'Y': sum+=4;
					break;
				case 'K': sum+=5;
					break;
				case 'J': case 'X': sum+=8;
					break;
				case 'Q': case 'Z': sum+=10;
					break;
				default: printf("Invalid character");
			}
	}
	return sum;
}
