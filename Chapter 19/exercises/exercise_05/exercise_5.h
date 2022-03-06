#ifndef FIFO_H
#def FIFO_H

#include <stdbool.h>

typedef int Item;
typedef struct stack_type {
	Item a[10];
} *Queue;

void insert(Queue s, Item i);
void remove(Queue s);
Item first_item(Queue s);
Item last_item(Queue s);
bool is_empty(Queue s);

#endif