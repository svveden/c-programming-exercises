/*	02/09/2022 */
/* This program declares a multidimensional array of a checkers board */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	char checkers_board[8][8] = {0};
	for(int i = 0; i<8; i++){
		for(int j = 0; j<8; j++){
			if((i+j)%2 == 0){
				checkers_board[i][j] = 'B';
			}
			else{
				checkers_board[i][j] = 'R';
			}
			printf("%c ", checkers_board[i][j]);
		}
		printf("\n");
	}
	return 0;
}
