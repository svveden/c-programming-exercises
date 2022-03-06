#ifndef FIFO_H
#def FIFO_H

#include <stdbool.h>

typedef int Item;
typedef struct stack_type *Stack;

void insert(Stack s, Item i);
void remove(Stack s);
Item first_item(Stack s);
Item last_item(Stack s);
bool is_empty(Stack s);

#endif