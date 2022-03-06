client: client.o question_1.o
	gcc -o client client.o question_1.o
question_1.o: question_1.c question_1.h
	gcc -c question_1.c
client.o: client.c question_1.h
	gcc -c client.c