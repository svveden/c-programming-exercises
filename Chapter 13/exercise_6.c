/* 02/21/2022 */
/* This program censors input. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void censor(char *a){
	while(*a){
		if(*a == 'f' && *(a+1) == 'o' && *(a+2) == 'o'){
			*(a) = 'x';
			*(a+1) = 'x';
			*(a+2) = 'x';
		}
		a++;
	}
}

int main(void){
	char censor1[20];
	printf("Enter string to be censored, fool: ");
	fgets(censor1, 20, stdin);
	censor(censor1);
	for(int i = 0; i < strlen(censor1); i++){
		printf("%c",censor1[i]);
	}
}
