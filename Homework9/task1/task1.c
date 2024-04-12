#include <stdio.h>
#include <string.h>

void input(char *str1, char *str2)
{
    FILE *in;
    if((in = fopen("input.txt", "r")) == NULL){
        perror("Can't open file");
    }
    else{
        fscanf(in, "%s %s", str1, str2);
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

void findLetters(char *str1, char *str2, char *strOut){
    
    int count1[26] = {0};
    int count2[26] = {0};
    int i;

    for (i = 0; i < strlen(str1); i++) {
        count1[str1[i] - 'a']++;
    }

    for (i = 0; i < strlen(str2); i++) {
        count2[str2[i] - 'a']++;
    }
    int counter = 0;
    for (i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            strOut[counter++] = 'a' + i;
            strOut[counter++] = ' ';
        }
    }
}

int main(int argc, char const *argv[])
{
    char word1[100];
    char word2[100];
    input(word1, word2);
    char outStr[100];  
    findLetters(word1, word2, outStr);
    output(outStr);
    return 0;
}
