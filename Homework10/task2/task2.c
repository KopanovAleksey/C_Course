#include "io.h"

void deleteSpaces(char *str1, char *str2){
    int count = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if(strlen(str2) == 0 && str1[i] == ' ')
             continue;
        if(str1[i] == ' ' && str2[count - 1] == ' ')
            continue;
        str2[count++] = str1[i];
    }
    
}

int main(int argc, char const *argv[])
{
    char strIn[1000] = "";
    input(strIn);
    char strOut[1000] = "";
    deleteSpaces(strIn, strOut);
    output(strOut);
    return 0;
}
