#include<stdio.h>

int checkBrackets(void){
    char c;
    int countOpen = 0, countClose = 0;
    while ((c = getchar()) != '.'){
        putchar(c);
        if (c == '(') countOpen++;
        else if (c == ')') countClose++;
    }
    if(countClose == countOpen) return 1;
    else return 0;
}

int main()
{
    printf("Enter a string with brackets ended with '.': ");
    checkBrackets() ? printf("\nYes") : printf("\nNo");
    return 0;
}

