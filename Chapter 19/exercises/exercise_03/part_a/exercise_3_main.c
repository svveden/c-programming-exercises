#include <stdio.h>
#include <stdlib.h>
#include "exercise_3.h"

int main(void){
	Stack s1 = create();
	insert(s1, 1);
	insert(s1, 2);
	insert(s1, 3);
	insert(s1, 4);
	insert(s1, 5);
	insert(s1, 6);
	insert(s1, 7);
	insert(s1, 8);
	insert(s1, 9);
	insert(s1, 10);
	remove_item(s1);
	insert(s1, 11);
	remove_item(s1);
	remove_item(s1);
	return 0;
}