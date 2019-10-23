#include<stdio.h>
#include<stdlib.h>
#include <dlfcn.h> 
extern int mult();
extern int divis();
int main(){
    int a,b;
    void *ext_library;
    printf("Введите числа для их последующего умножения и деления: \n");
    printf("1 число = ");
    scanf ("%d", &a);
    printf("2 число = ");
    scanf ("%d", &b);
    int (*mul)(int c, int d);
    int (*div)(int e, int f);
    ext_library = dlopen ("/home/ivan/Рабочий стол/Lab5/lab5_4/libfuncdyn.so",RTLD_LAZY); 
    if (!ext_library){ 
        fprintf(stderr,"dlopen() error: %s\n", dlerror()); 
        return 1; 
        };
        mul = dlsym(ext_library, "mult");
        div = dlsym(ext_library, "divis");
        printf("Результат умножения = %d \n", (*mul)(a,b));
        printf("Результат деления = %d \n", (*div)(a,b));
        dlclose(ext_library); 
    
    
}
