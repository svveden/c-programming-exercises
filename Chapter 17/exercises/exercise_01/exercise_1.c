/* 03/02/2022 */
/* Malloc wrapper */

#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n){
	void *p = malloc(n);
	if(p != NULL){
		return p;
	} else{
		printf("Error, malloc nulled.");
		exit(0);
	}
}

int main(void){
	int *p = my_malloc(5);
	return 0;
}