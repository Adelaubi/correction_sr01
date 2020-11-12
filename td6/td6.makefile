mystrupdown.o : mystrupdown.c
	gcc -o mystrupdown.o -c mystrupdown.c
mystrinv.o : mystrinv.c
	gcc -o mystrinv.o -c mystrinv.c
mystrchrn.o : mystrchrn.c
	gcc -o mystrchrn.o -c mystrchrn.c
mystrncpy.o : mystrncpy.c
	gcc -o mystrncpy.o -c mystrncpy.c
mystrncat.o : mystrncat.c
	gcc -o mystrncat.o -c mystrncat.c
main : mystrchrn.o mystrinv.o mystrncat.o mystrncpy.o mystrupdown.o
	gcc -o main mystrchrn.o mystrinv.o mystrncat.o mystrncpy.o mystrupdown.o

clean :
	rm main mystrupdown.o mystrchrn.o mystrinv.o mystrncpy.o mystrncat.o