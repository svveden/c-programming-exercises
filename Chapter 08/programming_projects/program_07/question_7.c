/* 02/09/2022 */
/* This program takes in a 5x5 array, one row at a time, then returns column and row totals. */

#include <stdio.h>
#include <ctype.h>

int main(void){
	int ints[5][5] = {0};
	int row = 0, column = 0;
	printf("Enter row 1: ");
	scanf("%d %d %d %d %d", &ints[0][0],&ints[0][1],&ints[0][2],&ints[0][3],&ints[0][4]);
	printf("Enter row 2: ");
	scanf("%d %d %d %d %d", &ints[1][0],&ints[1][1],&ints[1][2],&ints[1][3],&ints[1][4]);
	printf("Enter row 3: ");
	scanf("%d %d %d %d %d", &ints[2][0],&ints[2][1],&ints[2][2],&ints[2][3],&ints[2][4]);
	printf("Enter row 4: ");
	scanf("%d %d %d %d %d", &ints[3][0],&ints[3][1],&ints[3][2],&ints[3][3],&ints[3][4]);
	printf("Enter row 5: ");
	scanf("%d %d %d %d %d", &ints[4][0],&ints[4][1],&ints[4][2],&ints[4][3],&ints[4][4]);
	printf("Row totals: ");
	for(int i = 0; i < 5; i++){
		row = 0;
		for(int j = 0; j< 5; j++){
			row += ints[i][j];
		}
		printf("%d ", row);
	}
	printf("\nColumn totals: ");
	for(int i = 0; i < 5; i++){
		column = 0;
		for(int j = 0; j< 5; j++){
			column += ints[j][i];
		}
		printf("%d ", column);
	}
	return 0;
}
