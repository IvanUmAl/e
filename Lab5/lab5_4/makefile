lab5_4 : lab5_4.o libfuncdyn.so
	gcc lab5_4.c -o lab5_4 -ldl
libfuncdyn.so : func.o
	gcc -shared -o libfuncdyn.so func.o 
func.o : func.c
	gcc -fPIC -c func.c
clean :
	rm lab5_4 func.o libfuncdyn.so lab5_4.o
