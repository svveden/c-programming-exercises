/* 02/22/2022 ;) */
/* This program converts First and Last name to Last, F. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

void reverse_name(char *name){
	char last_name[81];
	char first_letter[2];
	for(int i = strlen(name); i > 0; i--){
		if(name[i] == '\n'){
			name[i] = '\0';
		}
		if(name[i] == ' ' && isalpha(name[i+1])){
			strcpy(last_name, &name[i + 1]);
			break;
		}
	}
	for(int j = 0; j < strlen(name); j++){
		if(isalpha(name[j])){
			first_letter[0] = name[j];
			first_letter[1] = '\0';
			break;
		}
	}
	strcpy(name, last_name);
	strcat(name, ", ");
	strcat(name, first_letter);
	strcat(name, ".");
}

int main(void){
	char name[81];
	printf("Enter a first and last name: ");
	fgets(name, 81, stdin);
	reverse_name(name);
	printf("%s", name);
	return 0;
}
