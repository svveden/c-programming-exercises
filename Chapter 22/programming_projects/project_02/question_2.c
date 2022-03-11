/* 03/11/2022 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	FILE *fp;
	fp = fopen(argv[1], "r");
	int ch;
	while((ch = fgetc(fp)) != EOF){
		if(isalpha(ch)){
			printf("%c", toupper(ch));
		} else{
			printf("%c", ch);
		}
	}
	fclose(fp);
}