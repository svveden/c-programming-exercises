/* 02/23/2022 */
/* Reverses inputted message. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 99

void read_message(char *message);
void reverse(char *message);

int main(void){
	char message[N];
	printf("Enter a message: ");
	read_message(message);
	printf("Reversal is: ");	
	reverse(message);
}

void read_message(char *message){
	fgets(message, N, stdin);
	message[strlen(message)-1] = '\0';
}

void reverse(char *message){
	char *p = message;
	for(p = &message[strlen(message)-1]; p >= message; p--){
		printf("%c", *p);
	} printf("\n");
}
