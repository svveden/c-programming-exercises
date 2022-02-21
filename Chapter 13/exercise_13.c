/* 02/21/2022 */
/* This program adds http:// and / to urls. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void build_index_url(const char *domain, char *index_url){
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/");

}

int main(void){
	char str1[30] = "knking.com";
	char str2[30];
	build_index_url(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
}
