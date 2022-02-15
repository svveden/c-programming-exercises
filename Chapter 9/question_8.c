/* 02/15/2022 */
/* Craps. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void){
	time_t t;
	int dice_1, dice_2;
	srand(time(NULL));
	dice_1 = rand() % 6;
	dice_2 = rand() % 6;
	if(dice_1 == 0){
		dice_1 = 1;
	}
	if(dice_2 == 0){
		dice_2 = 1;
	}
	return dice_1 + dice_2;
}

bool play_game(void){
	char c;
	int sum, point;
	bool first_roll = true;
	printf("Craps!\n");
	printf("Let's play, shall we?\n");
	printf("Heres the rules for the first round: If you roll and the sum of your two die is 7 or 11, you win!\n");
	printf("If your sum is 2, 3 or 12, well....you lose :(\n");
	printf("Any other roll sum, aka: 1, 4, 5, 6, 8, 9, or 10, will be ignored and you can roll again.\n");
	printf("Press 'enter' to rooooooooooolllllllll!!!\n");
	//first roll//
	while(first_roll){
		if((c = getchar()) == '\n'){
			sum = roll_dice();
			printf("You rolled: %d\n", sum);
			if(sum == 7 || sum == 11){
				printf("You win!\n");
				return true;
			} else if(sum == 2 || sum == 3 || sum == 12){
				printf("You lose!\n");
				return false;
			} else{
				point = sum;
				printf("Your point is: %d\n\n", point);
				sum = 0;
				first_roll = false;
			}
		}
	}
	while(sum != point){
		printf("Press 'enter' to roll again!\n");
		if((c = getchar()) == '\n'){
			sum = roll_dice();
			if(sum == 7){
				printf("You rolled: %d\n", sum);
				printf("You lose!\n");
				return false;
			} else{
				printf("You rolled: %d\n", sum);
			}
		}
	} 
	printf("You win!\n\n");
	return true;
}

int main(void){
	int win_count = 0, loss_count = 0;
	char c = ' ';
	while(c != 'N' || c != 'n'){
		if(play_game()){
			win_count+=1;
		} else {
			loss_count+=1;
		}
		printf("Play again? Y/N: ");
		c = getchar();
		if(c != 'y' || c != 'Y'){
			printf("Wins: %d\nLosses: %d\n\n", win_count, loss_count);
		}
		if(c == 'n' || c == 'N'){
			return 0;
		}
	}
	return 0;
}
