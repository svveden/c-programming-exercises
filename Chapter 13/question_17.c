/* 02/23/2022 */
/* Checks if input is palendrome with pointers **and strings** */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define N 99

/* Prototypes */
void read_input(char *message);
bool palindrome(char *message);

int main(void){
	char message[N];
	printf("Enter a message: ");
	read_input(message);
	if(palindrome(message)){
		printf("Palindrome\n");
	} else{
		printf("Not a palindrome\n");
	}
	return 0; 
}

void read_input(char *message){
	fgets(message, N, stdin);
	message[strlen(message)-1] = '\0';
}

bool palindrome(char *message){
	char *p = message, *q = &message[strlen(message)-1];
	while(p < q){
		if(*p == *q){
			p++;
			q--;
		}
		if(*p != *q){
			return false;
		}
	}
	return true;
}
