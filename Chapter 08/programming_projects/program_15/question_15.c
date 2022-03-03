/* 02/10/2022 */
/* Caesar cipher. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char sentence[80] = {' '}, c;
	int shift, i = 0;
	printf("Enter shift amount: ");
	scanf("%d", &shift);
	printf("Enter message to be encrypted: ");
	getchar();
	while((c = getchar()) != '\n'){
		if(c >= 'A' && c <= 'Z'){
			c = ((c-'A') + shift) % 26 + 'A';
			sentence[i] = c;
		}
		else if(c >= 'a' && c <= 'z'){
			c = ((c-'a') + shift) % 26 + 'a';
			sentence[i] = c;
		}
		else{
			sentence[i] = c;
		}
		i++;
	}
	for(int j = 0; j < 80; j++){
		printf("%c", sentence[j]);
	}
	
	return 0;
}
