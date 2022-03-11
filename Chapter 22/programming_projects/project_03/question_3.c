/* 03/11/2022 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	
	FILE *fp;
	int ch;

	if(argc < 2){
		printf("usage: canopen filename\n");
		exit(EXIT_FAILURE);
	}

	for(int i = 1; i < argc; i++){
		if((fp = fopen(argv[i], "r")) == NULL){
			printf("\n%s can't be opened\n", argv[i]);
			exit(EXIT_FAILURE);
		}
		while((ch = fgetc(fp)) != EOF){
			printf("%c", ch);
		}
			fclose(fp);
	}
}