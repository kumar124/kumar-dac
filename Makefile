testing:testing.o
		gcc -o testing testing.o
testing.o:testing.c
		gcc -c -o testing.o testing.c