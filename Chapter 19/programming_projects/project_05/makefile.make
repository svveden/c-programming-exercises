client: client.o question_5.o
	gcc -o client client.o question_5.o
question_5.o: question_5.c question_5.h
	gcc -c question_5.c
client.o: client.c question_5.h
	gcc -c client.c