/* 02/21/2022 */
/* This program counts the number of spaces in a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_spaces(const char *s){
	int count = 0;

	while(*s){
		if(*s++ == ' '){
			count++;
		}
	} return count;
}

int main(void){
	char str1[30] = "kn kin g.com";
	printf("%d", count_spaces(str1));
}
