/* 02/20/2022 */
/* This program capitalizes input. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char *a){
	char *p = a;
	while(*p != '\0'){
		if(isalpha(*p)){
			*p = toupper(*p);
			p++;
		} else{
			p++;
		}
	}
}

int main(void){
	char name[20];
	printf("Enter string to be uppercased: ");
	scanf("%s", name);
	capitalize(name);
	for(int i = 0; i < strlen(name); i++){
		printf("%c",name[i]);
	}
}
