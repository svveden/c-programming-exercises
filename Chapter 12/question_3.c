/* 02/19/2022 */
/* Reverses inputted message. */
#include <stdio.h>
#include <stdlib.h>
#define N 99

void read_message(char *a, int n, int *count);
void print_message(char *a, int n, int count);

int main(void){
	char message[N];
	int count = 0;
	printf("Enter a message: ");
	read_message(message, N, &count);
	printf("Reversal is: ");	
	print_message(message, N, count);
}

void read_message(char *a, int n, int *count){
	char c;
	while((c = getchar()) != '\n' && *count < n){
		*a = c;
		a++;
		(*count)++;
	}
}

void print_message(char *a, int n, int count){
	char *p;
	for(p = &a[count]; p >= a; p--){
		printf("%c", *p);
	} printf("\n");
}
