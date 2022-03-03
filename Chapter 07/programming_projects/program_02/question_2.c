/* 01/27/2022 */
/* This program asks for a number and then outputs a table of squares looping up to that number (for loop) */
#include <stdio.h>

int main(void){
	int entries;
	printf("This program prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &entries);
	getchar();
	for(int i=1;i<=entries;i++){
		printf("\t%d\t%d\n",i,i*i);
		if(i%24==0){
			printf("Press Enter to continue...");
			getchar();
		}
	}
	return 0;
}
