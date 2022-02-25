/* 01/26/2022 */
/* This program asks for a number and then outputs a table of squares looping up to that number */
#include <stdio.h>

int main(void){
	int entries;
	int i = 1;
	printf("This program prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &entries);
	while(i <= entries){
		printf("\t%d\t%d\n",i,i*i);
		i++;
	}
	return 0;
}

// /* 01/26/2022 */
// /* This program asks for a number and then outputs a table of squares looping up to that number (for loop) */
// #include <stdio.h>

// int main(void){
// 	int entries;
// 	printf("This program prints a table of squares.\nEnter number of entries in table: ");
// 	scanf("%d", &entries);
// 	for(int i=1;i<=entries;i++){
// 		printf("\t%d\t%d\n",i,i*i);
// 	}
// 	return 0;
// }
