/* 02/15/2022 */
/* Creates a magic square */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void create_magic_square(int magic, int square[magic][magic]){
	int row = 4, column = magic/2+1;
	square[0][(magic/2)] = 1;
	for(int i = 2; i <= magic*magic; i++){
		if(square[row][column] == 0){
			square[row][column] = i;
			row--;
			column++;
		} else{
			if(row == 4){
				row = magic%2;
			}else{
				row+=2;
			}
			if(column == 0){
				column = magic-1;
			}else{
				column--;
			}
			square[row][column] = i;
			row--;
			column++;
		}
		if(row < 0){
			row = magic-1;
		}
		if(column == magic){
			column = 0;
		}
	} return;
}

void print_magic_square(int magic, int square[magic][magic]){
	for(int i = 0; i < magic; i++){
		for(int j = 0; j < magic; j++){
			printf("%-2d ", square[i][j]);
		} printf("\n");
	} return;
}

int main(void){
	int magic;
	printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.");
	printf("Enter size of magic square: ");
	scanf("%d", &magic);
	int square[99][99] = {0};
	create_magic_square(magic, square);
	print_magic_square(magic, square);
	return 0;
}
