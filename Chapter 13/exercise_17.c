/* 02/21/2022 */
/* This program checks a file's extension. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool get_extension(const char *file_name, char *extension){
	while(*file_name++ != '.')
		;
		while(*file_name && *extension){
			if(toupper(*file_name++) != toupper(*extension++)){
				return false;
			}
		}return true;
} 

int main(void){
	char str1[25] = "jared.txt";
	char str2[25] = "TXT";
	if(get_extension(str1, str2)){
		printf("Match!");
	}else{
		printf("No match.");
	}
}
