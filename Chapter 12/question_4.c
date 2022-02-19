/* 02/19/2022 */
/* Checks if input is palendrome with pointers */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define N 99

/* Prototypes */
void read_input(char *a, int len, int *counter);
bool palindrome(char *a, int len, int counter);

int main(void){
	char msg[N];
	int counter = 0;
	printf("Enter a message: ");
	read_input(msg, N, &counter);
	if(palindrome(msg, N, counter)){
		printf("Palindrome\n");
	} else{
		printf("Not a palindrome\n");
	}
	return 0; 
}

void read_input(char *a, int len, int *counter){
	char c;
	while((c = getchar()) != '\n'){
		c = toupper(c);
		if(c >= 'A' && c <= 'Z'){
			*a++ = c;
			(*counter)++;
		}
	}
}

bool palindrome(char *a, int len, int counter){
	char *q = &a[counter-1];
	while(a < q){
		if(*a == *q){
			a++;
			q--;
		}
		if(*a != *q){
			return false;
		}
	}
	return true;
}
