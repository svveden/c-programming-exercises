/* 03/13/2022 */
/* Caesar cipher. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char c;
	int shift;
	char file_name[50];
	char file_contents[1024];
	printf("Enter name of file to be encrypted: ");
	scanf("%s", file_name);
	//
	FILE *fp, *fp2;
	if((fp = fopen(file_name, "r")) == NULL){
		fprintf(stderr, "Couldn't open a file with that name.\n");
		exit(EXIT_FAILURE);
	}
	strcat(file_name, ".enc");
	if((fp2 = fopen(file_name, "w+")) == NULL){
		fprintf(stderr, "Couldn't create a new file.\n");
		exit(EXIT_FAILURE);
	}
	//
	printf("Enter shift amount: ");
	scanf("%d", &shift);
	while((c = fgetc(fp)) != EOF){
		if(c >= 'A' && c <= 'Z'){
			c = ((c-'A') + shift) % 26 + 'A';
			fputc(c, fp2);
		}
		else if(c >= 'a' && c <= 'z'){
			c = ((c-'a') + shift) % 26 + 'a';
			fputc(c, fp2);
		}
		else{
			fputc(c, fp2);
		}
	}
	fclose(fp);
	fclose(fp2);
	return 0;
}
