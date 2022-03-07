#ifndef FIFO_H
#define FIFO_H

#include <stdbool.h>

#define STACK_SIZE 10
#define PUBLIC
#define PRIVATE static

typedef int Item;

typedef struct stack_type *Stack;

Stack create(int size);
void insert(Stack s, Item i);
void remove_item(Stack s);
Item first_item(Stack s);
Item last_item(Stack s);
bool is_empty(Stack s);

#endif