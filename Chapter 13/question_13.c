/* 02/23/2022 */
/* Caesar cipher. */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void encrypt(char *message, int shift);

int main(void){
	char sentence[80];
	int shift;
	printf("Enter shift amount: ");
	scanf("%d", &shift);
	printf("Enter message to be encrypted: ");
	getchar();
	fgets(sentence, 80, stdin);
	sentence[strlen(sentence)] = '\0';
	encrypt(sentence, shift);
	printf("%s", sentence);
	return 0;
}

void encrypt(char *message, int shift){
	char *p = message;
	while(*p){
		if(*p >= 'A' && *p <= 'Z'){
			*p = ((*p-'A') + shift) % 26 + 'A';
		}
		else if(*p >= 'a' && *p <= 'z'){
			*p = ((*p-'a') + shift) % 26 + 'a';
		}
		p++;
	}
}
