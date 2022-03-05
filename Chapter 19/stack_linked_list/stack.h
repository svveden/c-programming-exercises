#ifndef STACK_H
#define STACK_H

#include <stdbool.h> /* C99 only */

void make_empty(void);
void is_empty(void);
void is_full(void);
void push(int i);
int pop(void);

#endif