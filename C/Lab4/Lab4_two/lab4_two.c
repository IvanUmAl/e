#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check(char *file_name_in,char *count, FILE *in){
    in = fopen(file_name_in, "r");
    FILE *out = fopen(file_name_in, "r+");
    int n = atoi(count);
    int num = 0;
    char buf;
    int pos=0;
    while((buf=fgetc(in))!=EOF){
        fputc(buf, out); 
        if (buf==' ' && num<n){
        fputc('.', out);
        num++;  
       }
}   
    
    fclose(in);
    fclose(out);
    
}
int main(int argc, char **argv){
    FILE *f;
    check(argv[1], argv[2], f);
    return 0;
}
