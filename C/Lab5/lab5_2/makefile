lab5_2 : lab5_2.o libfunc.a
	gcc lab5_2.o -L. -lfunc -o lab5_2
libfunc.a : func.o
	ar rc libfunc.a func.o
	ranlib libfunc.a
func.o : func.c
	gcc -c func.c
lab5_2.o : lab5_2.c
	gcc -c lab5_2.c
clean :
	rm lab5_2 lab5_2.o func.o libfunc.a
