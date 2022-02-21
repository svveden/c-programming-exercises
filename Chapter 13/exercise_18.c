/* 02/21/2022 */
/* This program removes a url's file extension. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void remove_file_name(char *url){
	url = url + strlen(url);
	while(*url-- != '/')
		;
	*(url+1) = '\0';
}

int main(void){
	char str1[45] = "http://www.svvden.github.com/index.html";
	remove_file_name(str1);
	printf("%s", str1);
}
