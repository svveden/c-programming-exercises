queue: queue.o question_6.o
	gcc -o queue queue.o question_6.o
question_6.o: question_6.c question_6.h
	gcc -c question_6.c
queue.o: queue.c question_6.h
	gcc -c queue.c