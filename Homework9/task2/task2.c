#include <stdio.h>
#include <string.h>

void input(char *str)
{
    FILE *in;
    if((in = fopen("input.txt", "r")) == NULL){
        perror("Can't open file");
    }
    else{
        fscanf(in, "%s", str);
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

void changeLettersAtoB(char *strIn, char *strOut){
    for(int i = 0; i < strlen(strIn); i++){
        if (strIn[i] == 'A' || strIn[i] == 'a')
            strOut[i] = strIn[i] + 1;
        else if (strIn[i] == 'B' || strIn[i] == 'b')
            strOut[i] = strIn[i] - 1;
        else
            strOut[i] = strIn[i];
    }
}

int main(int argc, char const *argv[])
{
    char strIn[1000] = "";
    input(strIn);
    char strOut[1000] = ""; 
    changeLettersAtoB(strIn, strOut);
    output(strOut);
    return 0;
}