/* 02/21/2022 */
/* This program grabs file's extension. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_extension(const char *file_name, char *extension){
	int i = 0;
	for(;i < strlen(file_name); i++){
		if(file_name[i] == '.'){
			strcpy(extension, &file_name[++i]);
		}
	}
}

int main(void){
	char str1[25] = "jared.txt";
	char str2[25];
	get_extension(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
}
