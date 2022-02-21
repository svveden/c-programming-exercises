/* 02/21/2022 */
/* This program compares two strings. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_strcmp(char *s, char *t){
	while(*s++ == *t++){
		if(*s == '\0'){
			return 0;
		}	
	} 
	return *s - *t;
}

int main(void){
	char str1[25] = "jared";
	char str2[25] = "jared";
	printf("%d\n",my_strcmp(str1, str2));
}
