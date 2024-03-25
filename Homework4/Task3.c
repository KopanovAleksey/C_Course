#include<stdio.h>

int main()
{
    int a, digit;
    _Bool flag = 1;
    printf("Enter number: ");
    for (scanf("%d", &a); a > 0 && flag; a /= 10){
        digit = a % 10;
        if (digit % 2 != 0)
            flag = 0;
    }
    printf("Is all even ? ");
    flag ? printf("Yes") : printf("No");
    return 0;
}
