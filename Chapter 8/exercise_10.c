/*	02/09/2022 */
/* This program declares a multidimensional array of a chess board */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
							  {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
							  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
							  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
							  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
							  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
							  {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
							  {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
	return 0;
}
