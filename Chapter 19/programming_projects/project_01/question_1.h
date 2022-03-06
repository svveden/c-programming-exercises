#define STACK_SIZE 100

typedef char Item;

typedef struct stack_type *Stack;

Stack create(int size);
void push(Stack s, char);
char pop(Stack s);
void menu(void);
void display(Stack s);
void nesting(Stack s);