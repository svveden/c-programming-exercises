/* 02/09/2022 */
/* This program takes in a 5 students grades for 5 quizzes then outputs requested answers. */

#include <stdio.h>
#include <ctype.h>
#define STUDENTS 5
#define QUIZZES 5

int main(void){
	int grades[STUDENTS][QUIZZES] = {0};
	int row = 0, column = 0, high = 0, low = 101;
	for(int i = 0; i < STUDENTS; i++){
		printf("Enter quizzes for student %d: ", i);
		for(int j = 0; j < QUIZZES; j++){
			scanf("%d", &grades[i][j]);
		}
	}
	printf("\n");
	for(int i = 0; i < STUDENTS; i++){
		row = 0;
		for(int j = 0; j< QUIZZES; j++){
			row += grades[i][j];
		}
		printf("Student %d totals: %d\nStudent %d average: %d\n\n", i, row, i, row/STUDENTS);
	}
	for(int i = 0; i < STUDENTS; i++){
		column = 0;
		for(int j = 0; j < QUIZZES; j++){
			column += grades[j][i];
			if(high < grades[j][i]){
				high = grades[j][i];
			} else if(low > grades[i][j]){
				low = grades[i][j];
			}
		}
	}
	printf("Quiz average: %d\n", column/QUIZZES);
	printf("Quiz high: %d\n", high);
	printf("Quiz low: %d\n ", low);
	return 0;
}
