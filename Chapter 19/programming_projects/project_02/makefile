client: client.o question_2.o
	gcc -o client client.o question_2.o
client.o: client.c question_2.h
	gcc -c client.c
question_2.o: question_2.c question_2.h
	gcc -c question_2.c