/* 02/21/2022 */
/* This program outputs the reverse of arguments put in the command line. */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	for(int i = argc-1; i > 0; i--){
		printf("%s ", argv[i]);
	}
}
