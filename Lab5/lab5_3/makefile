lab5_3 : lab5_3.o libfuncdyn.so
	gcc lab5_3.o -L. -lfuncdyn -o lab5_3
libfuncdyn.so : func.o
	gcc -shared -o libfuncdyn.so func.o 
func.o : func.c
	gcc -fPIC -c func.c
lab5_3.o : lab5_3.c
	gcc -c lab5_3.c
clean :
	rm lab5_3 lab5_3.o func.o
