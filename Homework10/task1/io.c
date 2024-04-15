#include <stdio.h>
#include <string.h>
#include "io.h"

void input(char *strIn)
{
    FILE *in;
    if((in = fopen("input.txt", "r")) == NULL){
        perror("Can't open file");
    }
    else{
        fscanf(in, "%[^n]", strIn);
        fclose(in);
    }
}
void output(char *strOut)
{
    FILE *out;
    if((out = fopen("output.txt", "w")) == NULL){
        perror("Can't open file");
    }
    else{
        fprintf(out, "%s", strOut);
        fclose(out);
    }
}
