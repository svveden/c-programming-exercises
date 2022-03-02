/* 03/02/2022 */
/* Int array dynamic allocator. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *create_array(int n, int initial_value){
	int *a = malloc(sizeof(int) * n);
	int *p = a;
	if(a == NULL){
		printf("Malloc nulled out.\n");
		exit(0);
	}
	for(; p < (a + n); p++){
		*p = initial_value;
	}
	return a;
}

int main(void){
	int *a = create_array(10, 1);
	for(int i = 0; i < 10; i++){
		printf("%d", a[i]);
	}
	return 0;
}