/* 02/18/2022 */
/* This program creates a random walk on a 10x10 grid from A -> Z */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void initialize(char a[][10], int n);
void initialize_random(void);
void walker(char a[][10], int n);
void print_walk(char a[][10], int n);

int main(void){
	char walk[10][10];
	initialize_random();
	initialize(walk, 10);
	walker(walk, 10);
	print_walk(walk, 10);
	return 0;
}

void initialize_random(void){
	srand((unsigned) time(NULL));
}
void initialize(char a[][10], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			a[i][j] = '.';
		}
	}
}

void walker(char a[][10], int n){
	bool up = true, down = true, left = true, right = true;
	char letter = 'A';
	int move;
	a[0][0] = letter;
	int i = 0, j = 0;
	letter++;
	while(letter != 'Z'+1){
		if(up == false && down == false && left == false && right == false){
			return;
		}
		move = rand() % 4;
		if(move == 0){ //up
			if(a[i-1][j] == '.'){
				a[--i][j] = letter;
				letter++;
				up = down = left = right = true;
			}else{
				up = false;
			}
		}
		if(move == 1){ //down
			if(a[i+1][j] == '.'){
				a[++i][j] = letter;
				letter++;
				up = down = left = right = true;
			}
			else{
				down = false;
			}
		}
		if(move == 2 && j != 9){ //right
			if(a[i][j+1] == '.'){
				a[i][++j] = letter;
				letter++;
				up = down = left = right = true;
			}
			else{
				right = false;
			}
		}
		if(move == 3 && j != 0){ //left
			if(a[i][j-1] == '.'){
				a[i][--j] = letter;
				letter++;
				up = down = left = right = true;
			}
			else{
				left = false;
			}
		}
	}
}

void print_walk(char a[][10], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%c ", a[i][j]);
		} printf("\n");
	}
}

