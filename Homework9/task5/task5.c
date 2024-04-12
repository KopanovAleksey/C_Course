#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *f;
    if((f = fopen("input.txt", "r")) == NULL){
        perror("Cant open file.");
    }
    else{
        int maxLength = 0;
        char strIn[1000] = "";
        char strOut[100] = "";
        while(fscanf(f, "%s", strIn) == 1){
            if(strlen(strIn) > maxLength){
                maxLength = strlen(strIn);
                strcpy(strOut, strIn);
            }
        }
        fclose(f);
        if((f = fopen("output.txt", "w")) == NULL){
            perror("Cant open file.");
        }else{
            fprintf(f, "%s", strOut);
            fclose(f);
        }
    }
    return 0;
}
