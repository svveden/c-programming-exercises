/* 02/10/2022 */
/* This program calculates scrabble value of inputted word */ 

#include <stdio.h>
#include <ctype.h>

int main(void){
	char letter;
	int score[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	int sum = 0;
	printf("Enter a word: ");
	while((letter = getchar()) != '\n'){
			letter = toupper(letter);
			sum += score[letter-65];
		}
	printf("Scrabble value: %d\n", sum);
	return 0;
}
