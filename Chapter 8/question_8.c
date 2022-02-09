/* 02/09/2022 */
/* This program takes in a 5 students grades for 5 quizess then outputs requested answers. */

#include <stdio.h>
#include <ctype.h>

int main(void){
	int ints[5][5] = {0};
	int row = 0, column = 0, high = 0, low = 101;
	printf("Enter quizzes for student 1: ");
	scanf("%d %d %d %d %d", &ints[0][0],&ints[0][1],&ints[0][2],&ints[0][3],&ints[0][4]);
	printf("Enter quizzes for student 2: ");
	scanf("%d %d %d %d %d", &ints[1][0],&ints[1][1],&ints[1][2],&ints[1][3],&ints[1][4]);
	printf("Enter quizzes for student 3: ");
	scanf("%d %d %d %d %d", &ints[2][0],&ints[2][1],&ints[2][2],&ints[2][3],&ints[2][4]);
	printf("Enter quizzes for student 4: ");
	scanf("%d %d %d %d %d", &ints[3][0],&ints[3][1],&ints[3][2],&ints[3][3],&ints[3][4]);
	printf("Enter quizzes for student 5: ");
	scanf("%d %d %d %d %d", &ints[4][0],&ints[4][1],&ints[4][2],&ints[4][3],&ints[4][4]);
	printf("\n");
	for(int i = 0; i < 5; i++){
		row = 0;
		for(int j = 0; j< 5; j++){
			row += ints[i][j];
		}
		printf("Student %d totals: %d\nStudent %d average: %d\n\n", i, row, i, row/5);
	}
	for(int i = 0; i < 5; i++){
		column = 0;
		for(int j = 0; j< 5; j++){
			column += ints[j][i];
			if(high < ints[j][i]){
				high = ints[j][i];
			} else if(low > ints[i][j]){
				low = ints[i][j];
			}
		}
	}
	printf("Quiz average: %d\n", column/5);
	printf("Quiz high: %d\n", high);
	printf("Quiz low: %d\n ", low);
	return 0;
}
