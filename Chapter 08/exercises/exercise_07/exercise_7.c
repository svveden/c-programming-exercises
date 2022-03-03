/*	02/09/2022 */
/* This program declares a multidiminsional array for keeping track of digital number output */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	int num;
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
								 {[1] = 1, [2] = 1},
								 {1, 1, 0, 1, 1, 0, 1},
								 {1, 1, 1, 1, 0, 0, 1},
								 {[1] = 1, [2] = 1,[5] = 1, [6] = 1},
								 {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1},
								 {1, 1, 1},
								 {1, 1, 1, 1, 1, 1, 1},
								 {1, 1, 1, 1, 0, 1, 1}};
	printf("Enter a number 0 - 9: ");
	scanf("%d", &num);
	for(int i = 0; i<7; i++){
		printf("%d ", segments[num][i]);
	}
	printf("\n");
	return 0;
}
