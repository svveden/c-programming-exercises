/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 02/15/2022 */
/* Secret number guessing game using external variables. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int num = 0;
void initializer(void);
int secret_number(void);
void interaction(void);

void initializer(void){
	srand(time(NULL));
}

int secret_number(void){
	return num = rand() % 100;
}

void interaction(void){
	int guess, counter = 0;
	printf("A new number has been chosen.\n");
	printf("Enter guess: ");
	scanf("%d", &guess);
	while(guess != num){
		if(guess > num){
			printf("Too high; try again.");
			counter++;
		} else if(guess < num){
			printf("Too low; try again.");
			counter++;
		}
		printf("Enter guess: ");
		scanf("%d", &guess);
	}	
	printf("You won in %d guesses!", counter);
}


int main(void){
	char ans;
	initializer();
	secret_number();
	printf("Guess the secret number between 1 and 100!\n");
	interaction();
	while(ans != 'N'){
		printf("\nPlay again? (Y/N): ");
		getchar();
		ans = getchar();
		if(ans == 'Y'){
			secret_number();
			interaction();
		} else if(ans != 'Y' && ans != 'N'){
			printf("\nIncorrect choice.\n");
		}
	}
	return 0;
}
