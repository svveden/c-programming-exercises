database: database.o database_functions.o
	gcc -o database database.o database_functions.o
database.o: database.c database_functions.h
	gcc -c database.c
database_functions.o: database_functions.c database_functions.h
	gcc -c database_functions.c