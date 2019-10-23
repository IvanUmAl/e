#include<stdio.h>
#include<stdlib.h>
extern int mult();
extern int divis();
int main(){
    int a,b;
    printf("Введите числа для их последующего умножения и деления: \n");
    printf("1 число = ");
    scanf ("%d", &a);
    printf("2 число = ");
    scanf ("%d", &b);
    printf("Результат умножения = %d \n", mult(a,b));
    printf("Результат деления = %d \n", divis(a,b));
    
}
