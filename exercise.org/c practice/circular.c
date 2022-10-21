#include <stdio.h>

int remove_oldest(char buffer[7], int num_of_removed, int old){
	printf("%d", old);
	int i = 0;
	for(; i < num_of_removed; i++){
		buffer[(old+i)%7] = '\0';
	}
	return old+i;
}

int insert(char buffer[7], char item, int old){
	for(int i = 0; i < 7; i++){
		if(buffer[i] == '\0'){
			buffer[i] = item;
			return old;
		}
	}
	printf("Buffer full, overwritting oldest!");
	buffer[old] = item;
	return old+1;
}

void print_buffer(char buffer[7]){
	printf("\n");
	for(int i = 0; i < 7; i++){
		if(buffer[i] == '\0'){
			printf("[ ] ");
		} else{
			printf("[%c] ", buffer[i]);
		}
	}
}

int main(void){
	int old = 0;
	char buffer[7] = {};
	//start with empty buffer
	print_buffer(buffer);
	//fill buffer
	old = insert(buffer, 'A', old);
	old = insert(buffer, 'B', old);
	old = insert(buffer, 'C', old);
	old = insert(buffer, 'D', old);
	old = insert(buffer, 'E', old);
	old = insert(buffer, 'F', old);
	old = insert(buffer, 'G', old);
	print_buffer(buffer);
	//overflow
	old = insert(buffer, 'H', old);
	print_buffer(buffer);
	//remove 2
	old = remove_oldest(buffer, 2, old);
	print_buffer(buffer);
	//add 2
	old = insert(buffer, 'P', old);
	old = insert(buffer, 'M', old);
	print_buffer(buffer);
	//remove 6 looping back to front
	old = remove_oldest(buffer, 6, old);
	print_buffer(buffer);
	//insert new 
	insert(buffer, 'Z', old);
	print_buffer(buffer);
}