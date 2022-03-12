/* 03/12/2022 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		fprintf(stderr, "Usage: ./question_6 filename\n");
		exit(EXIT_FAILURE);
	}
	FILE *fp = fopen(argv[1], "rb");
	fpos_t file_pos;
	char buf[11];
	int n = 1, i;
	printf("Offset               Bytes                 Characters\n");
	printf("------   -----------------------------     ----------\n");
	fgetpos(fp, &file_pos); //gets file pos
	printf("%3lld", file_pos); //prints FIRST file pos
	printf("      "); //prints FIRST spaces
	while(fgets(buf, sizeof(buf), fp) != NULL){
		fgetpos(fp, &file_pos); //get file pos every loop
		for(i = 0; i < strlen(buf); i++, n++){ //print 10 bytes
				printf("%.2X ", buf[i]); 
				if(n == 10){ //when on 10th byte, 
					printf("    "); //print spaces
					for(i = 0; i < 10; i++){ //check if each byte in the last 10 are printable
						if(isprint(buf[i])){
							printf("%c", buf[i]); //then print
						} else{
							printf(".");
						}
					}
					printf("\n");
					printf("%3lld", file_pos); //next line and file pos
					printf("      ");
					n = 0;
				}
		}
		i = 0;
	} 
	printf("\n");
}