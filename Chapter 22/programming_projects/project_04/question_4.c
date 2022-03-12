/* 03/11/2022 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int n = 0;
	int ch;
	if((fp=fopen(argv[1], "r")) != NULL){
		while(fgetc(fp) != EOF){
			n++;
		}
	} printf("Number of characters in %s: %d\n", argv[1], n);
	fclose(fp);
	n = 0;
	if((fp=fopen(argv[1], "r")) != NULL){
		while((ch = fgetc(fp)) != EOF){
			if(isalpha(ch)){
				while(!isspace(ch)){
					ch = fgetc(fp);
				}
				n++;
			}
		}
	} printf("Number of words in %s: %d\n", argv[1], n);
	fclose(fp);
	char buf[50];
	n=0;
	if((fp=fopen(argv[1], "r")) != NULL){
		while((fgets(buf, 50, fp)) != NULL){
			n++;
		}	
	} printf("Number of lines in %s: %d\n", argv[1], n);
	return 0;
}