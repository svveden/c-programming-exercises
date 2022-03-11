/* 03/11/2022 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int line_length(const char *filename, int n){
	FILE *fp;
	if((fp = fopen(filename, "r")) == NULL){
		return 0;
	}
	char line[50];
	while(n > 1){
		fgets(line, sizeof(line), fp);
		n--;
	}
	if(n!=1){
		fprintf(stderr, "Line not found!\n");
		exit(EXIT_FAILURE);
	}
	fgets(line, sizeof(line), fp);
	return strlen(line);
}

int main(void){
	line_length("test.txt", 1);
	return 0;
}