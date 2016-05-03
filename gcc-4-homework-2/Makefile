main:main.o producer.o consummer.o
	gcc main.o producer.o consummer.o -o main

main.o:main.c
	gcc -c main.c
producer.o:producer.c
	gcc -c producer.c
consummer.o:consummer.c
	gcc -c consummer.c
clean:
	rm main *.o
