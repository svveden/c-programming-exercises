#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

int main(void){
	int num;
	printf("Enter number of folders: ");
	scanf("%d", &num);
	for(int i = 1; i <= num; i++){
		char name[25];
		char buffer[3];
		sprintf(buffer, "%.2d", i);
		strcpy(name, "question_");
		strcat(name, buffer);
		mkdir(name, i);
	}
	return 0;
}