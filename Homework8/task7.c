#include<stdio.h>

int what_color(char str[]){
    int color;
    for (char i = 'A'; i <= 'H'; i++) {
        for (char j = '1'; j <= '8'; j++){
            color = ((i - 'A') + j) % 2;
            if (str[0] == i && str[1] == j){
                return color;
            }
        }
    }
    return -1;
}

int main()
{
    char str[] = "H8";
    int result = what_color(str);
    printf("%s", result == -1 ? "Wrong input" : result ? "Black" : "White");
    return 0;
}