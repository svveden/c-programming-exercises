/* 02/20/2022 */
/* This program modifies the read_line function to have 4 new stipulations. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int read_line(char str[], int n){
	int ch, i = 0;
	while((ch = getchar()) != '\n' && ch != '\0'){
		if(i > 0 && isspace(ch)){
			return i;
		}
		else if(i == 0 && isspace(ch)){
			;
		}
		else if(i < n){
			str[i++] = ch;
		}
	}
	if(ch == '\n'){
			str[i] = '\n';
	}
	return i;
}

int main(void){
	char str[10];
	read_line(str, 10);
	for(int i = 0; i < 10; i++){
		printf("%c", str[i]);
	}
	return 0;
}
