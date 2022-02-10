/* 02/10/2022 */
/* This program converts First and Last name to Last, F. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	char c;
	char first;
	char last[20] = {' '};
	int i = 0; 
	printf("Enter a first and last name: ");
	scanf(" %c", &first);
	while((c = getchar()) != ' ');
	while((c = getchar()) != '\n'){
		last[i] = c;
		i++;
	}
	printf("You entered the name: ");
	for(int j = 0; j < 20; j++){
		printf("%c", last[j]);
	}
	printf(", %c.\n", first);
	return 0;
}
