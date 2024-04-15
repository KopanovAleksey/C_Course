#include "io.h"

void changeExtention(char *strIn, char *strOut){
    for (int i = strlen(strIn)-1; i >= 0; i--){
        if(strIn[i] == '/')
        {
            strcpy(strOut, strIn);
            strcat(strOut, ".html");
            break;
        }    
        else if (strIn[i] == '.')
        {
            memcpy(strOut, strIn, i);
            strcat(strOut, ".html");
            break;
        }
    }
}


int main(int argc, char const *argv[])
{
    char strIn[1000] = "";
    input(strIn);
    char strOut[1000] = "";
    changeExtention(strIn, strOut);
    output(strOut);
    return 0;
}
