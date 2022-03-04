/* 03/03/2022 */
/* Sorting inputted strings using qsort & dynamically allocated arrays */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_words(const void *p, const void *q){
	return strcmp(*(char**)p, *(char**)q);
}

int main(void){
	char *list[100];
	char buf[20];
	int pos = 0;
	while(buf[0] != '\n'){
		printf("Enter a word: ");
		fgets(buf, 20, stdin);
		list[pos] = malloc(strlen(buf));
		strcpy(list[pos++], buf);
	}
	qsort(list, pos-1, sizeof(char*), compare_words);
	for(int i = 0; i < pos-1; i++){
		printf("%s", list[i]);
	}
	return 0;
}