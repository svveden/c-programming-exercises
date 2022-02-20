/* 02/20/2022 */
/* This program takes in cmd arguments as input and outputs if its a planet and its position in the solar system. */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
	int i = 1, j = 0;
	for(; i < argc; i++){
		for(j = 0; j < 8; j++){
			if(strcmp(argv[i], planets[j]) == 0){
				printf("%s is planet %d\n", argv[i], j+1);
				break;
			} 
		}
		if (j == 8){
			printf("%s is not a planet.\n", argv[i]);
		}
	} return 0;
}
