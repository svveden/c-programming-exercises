#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct s{
	char a;
	int b[2];
	float c;
};

int main(void){
	struct s *q;
	q = malloc(sizeof(struct s));
	q->a = 'w';
	q->b[0] = 1;
	q->b[1] = 2;
	q->c = 1.1;
	printf("Size of a: %d\nOffset of a: %lu\nSize of b: %d\nOffset of b: %lu\nSize of c: %d\nOffset of c: %lu\n", sizeof(q->a), offsetof(struct s, a), sizeof(q->b), offsetof(struct s, b), sizeof(q->c), offsetof(struct s, c));
}