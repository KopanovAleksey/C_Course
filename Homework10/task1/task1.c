#include <stdio.h>
#include "io.h"

void swap (char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    char strIn[1000] = "";
    input(strIn);
    int i = 0, j = 1;
    while (i < strlen(strIn) && j < strlen(strIn))
    {
        while(!((strIn[i] >= 'a' && strIn[i] <= 'z')||
            (strIn[i] >= 'A' && strIn[i] <= 'Z')))
            {
                if(i > strlen(strIn))
                    break;
                printf("%d\n", i);
                i++;
                j = i + 1;
            }
        while(!((strIn[j] >= 'a' && strIn[j] <= 'z')||
            (strIn[j] >= 'A' && strIn[j] <= 'Z')))
        {
            if(j > strlen(strIn))
                    break;
            j++;    
        }
        swap(&strIn[i], &strIn[j]);
        j += 2;
        i = j - 1;
    }
    output(strIn);
    

    return 0;
}
