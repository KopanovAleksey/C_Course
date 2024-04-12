#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *f;
    char strIn[1000] = "";
    int countEndA = 0;
    if((f = fopen("input.txt", "r")) == NULL){
        perror("Cant open file");
    }else{
        while (fscanf(f, "%s", strIn) == 1)
        {
            if(strIn[strlen(strIn) - 1] == 'a')
                countEndA++;
        }
        fclose(f);
        if((f = fopen("ouput.txt", "w")) == NULL){
            perror("Cant open file");
        }else{
            fprintf(f,"%d", countEndA);
            fclose(f);
        }
    }
    return 0;
}
