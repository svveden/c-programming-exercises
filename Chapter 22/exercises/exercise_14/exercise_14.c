/* 03/11/2022 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_fgets(char *s, int n, FILE * stream){
	int ch, i;
	char *nulz = NULL;
	if((ch = fgetc(stream)) == '\n' || ch == EOF){
		return nulz;
	}
	for(i = 0; i < n-1 && ch != EOF && ch != '\n'; i++){
		s[i] = ch;
		ch = fgetc(stream);
	}
	if(ch == '\n' && i < n-1){
		s[i] = ch;
	}
	s[n] = '\0';
	return s;
}

int my_fputs(char *s, FILE * stream){
	int ch, i;
	for(i = 0; i < strlen(s); i++){
		ch = s[i];
		if(putc(ch, stream) == EOF){
			fprintf(stderr, "Error during write.");
			return EOF;
		}
	}
	return 1;
}

// int main(void){
// 	FILE *fp;
// 	char buf[50];
// 	char *line = "Jared";
// 	fp = fopen("test.txt", "r");
// 	my_fgets(buf, 10, fp);
// 	printf("%s", buf);
// 	fclose(fp);
// 	fp = fopen("test.txt", "a");
// 	my_fputs(line, fp);
// 	fclose(fp);

// }