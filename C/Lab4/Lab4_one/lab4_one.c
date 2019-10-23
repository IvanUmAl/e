#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check(char *file_name_in,char *count, FILE *in){
    in = fopen(file_name_in, "r");
    char s[80]="";
    int i=0;
    while(file_name_in[i]!='.')
        i++;
    strncpy(s, file_name_in, i);
    char *file_name_out = strcat(s,".c");
    FILE *out=fopen(file_name_out, "w+");
    char buf[1024];
    int n = atoi(count);
    int numinstr=0;
    while(!feof(in)){
        fgets(buf, 1024, in);
        for(int i=0;buf[i]!=NULL;i++)
            if(buf[i]>='0' && buf[i]<='9')
                numinstr++;
        if(numinstr==n)
            fputs(buf, out);
    numinstr=0;
    }
    fclose(out);
    fclose(in);
    }
int main(int argc, char **argv){
    FILE *f;
    check(argv[1], argv[2], f);
    return 0;
}
