/* 01/27/2022 */
/* This program computes the factorial of an integer. */

#include <stdio.h>

int main(void){
	int num;
	int sum = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	for(int i = num; i > 0; i--){
		sum*=i;
	}
	printf("Sum: %d\n", sum);
	return 0;
}


// #include <stdio.h>

// int main(void){
// 	int num;
// 	short sum = 1;
// 	printf("Enter a positive integer: ");
// 	scanf("%d", &num);
// 	for(int i = num; i > 0; i--){
// 		sum*=i;
// 	}
// 	printf("Sum: %d\n", sum);
// 	return 0;
// }
/* LARGEST IS FACTORIAL OF 7 */

