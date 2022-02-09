/* 02/09/2022 */
/* Translates input into L33T speech */

#include <stdio.h>
#include <ctype.h>

int main(void){
	char msg[100] = {'0'};
	char c;
	int pos = 0;
	printf("Enter message: ");
	while((c = getchar()) !='\n'){
		msg[pos] = c;
		pos += 1;
	}
	printf("In B1FF-speak: ");
	for(int i = 0; i<100; i++){
		msg[i] = toupper(msg[i]);
		switch(msg[i]){
			case 'A':
				msg[i] = '4';
				break;
			case 'B':
				msg[i] = '8';
				break;
			case 'E':
				msg[i] = '3';
				break;
			case 'I':
				msg[i] = '1';
				break;
			case 'O':
				msg[i] = '0';
				break;
			case 'S':
				msg[i] = '5';
				break;
		}
		printf("%c", msg[i]);
	}
	printf("!!!!!!!!!!\n");
	return 0;
}
