/* 02/16/2022 */
/* Stack for RPN */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_DIGITS 10

/* Externals */

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
								 {0, 1, 1, 0, 0, 0, 0},
								 {1, 1, 0, 1, 1, 0, 1},
								 {1, 1, 1, 1, 0, 0, 1},
								 {0, 1, 1, 0, 0, 1, 1},
								 {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1},
								 {1, 1, 1, 0, 0, 0, 0},
								 {1, 1, 1, 1, 1, 1, 1},
								 {1, 1, 1, 1, 0, 1, 1}};

const int segment_grid[7][2] = {{0, 1},
                                {1, 2},
                                {2, 2},
                                {2, 1},
                                {2, 0},
                                {1, 0},
                                {1, 1}};


char digits[4][MAX_DIGITS*4];

/* Prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void){
	char digit, i = 0;
	clear_digits_array();
	printf("Enter a number: ");

	while((digit=getchar())!='\n'){
		if(isdigit(digit)){
			process_digit(digit - '0', i);
			i+=4;
		}
	}
	print_digits_array();
	return 0;
}

void clear_digits_array(void){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < MAX_DIGITS*4; j++){
			digits[i][j] = ' ';
		}
	}
}

void process_digit(int digit, int position) {

   int i, row, col;
   
   for (i = 0; i < 7; i++) {
       if (segments[digit][i]) {
           row = segment_grid[i][0];
           col = segment_grid[i][1] + position;
           digits[row][col] = i % 3 == 0 ? '_' : '|';
       }
   }
}

void print_digits_array(void){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < MAX_DIGITS*4; j++){
			printf("%c",digits[i][j]);
		} printf("\n");
	}
}

