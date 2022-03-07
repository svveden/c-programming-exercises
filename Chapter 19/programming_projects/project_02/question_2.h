#define STACK_SIZE 100

typedef int Item;

typedef struct stack_type *Stack;

Stack create(int size);
void push(Stack s, int);
int pop(Stack s);
void menu();
void display(Stack s);
void rpn(Stack s);
