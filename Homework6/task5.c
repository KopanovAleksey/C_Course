#include<stdio.h>

int acounter(void){
    char c;
    if ((c = getchar()) == '.')
        return 0;
    return (c == 'a') + acounter();
}

int main()
{
   printf("Count of 'a' = %d", acounter());
    return 0;
}