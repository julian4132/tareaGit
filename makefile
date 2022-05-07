
main: main.o operaciones.o
	gcc main.o operaciones.o -o main

operaciones.o: operaciones.c
	gcc -c operaciones.c  -o operaciones.o

main.o: main.c operaciones.h
	gcc -c main.c -o main.o