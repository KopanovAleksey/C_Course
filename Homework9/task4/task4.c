#include <stdio.h>
#include <string.h>

void input(char *str)
{
    FILE *in;
    if((in = fopen("input.txt", "r")) == NULL){
        perror("Can't open file");
    }
    else{
        fscanf(in,"%[^\n]", str);
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

void removeDuplicates(char *strIn, char *strOut){
    int counter = 0;
    int flag = 0;
    for (int i = 0; i < strlen(strIn); i++){
        flag = 1;
        if(strIn[i] == ' ')
            continue;
        for (int j = 0; j < strlen(strOut); j++){
            if(strIn[i] == strOut[j]) flag = 0;
        }
        if(flag) strOut[counter++] = strIn[i];
    }


}

int main(int argc, char const *argv[])
{
    char strIn[1000] = "";
    char strOut[1000] = "";
    input(strIn);
    removeDuplicates(strIn, strOut);
    output(strOut);
    return 0;
}
