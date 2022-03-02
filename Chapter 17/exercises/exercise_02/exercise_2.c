/* 03/02/2022 */
/* String dynamic allocator */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *a){
	char *p = malloc(strlen(a)+1);
	strncpy(p, a, strlen(a));
	if(p == NULL){
		printf("Malloc nulled out.\n");
		exit(0);
	} else{
		return p;
	}
}

int main(void){
	char *p = duplicate("abc");
	return 0;
}