#include<stdio.h>

void oddOnly(void){
    int num = 0;
    char c;
    do {
        c = getchar();
        if(c == ' ' || c == '.'){
            if(num % 2 != 0)
                printf("%d ", num);
            num = 0;
        }
        else{
            num = num*10 + (c - '0');
        } 
    } while (c != '.');
}

int main()
{
   oddOnly();
    return 0;
}
