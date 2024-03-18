#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Task 4

    int a;
    printf("Print 4-digit number:\n");
    scanf("%d", &a);

    int first = a/1000;
    int second = a%1000/100;
    int third = a%100/10;
    int fourth = a%10;
    
    printf("Avarege of the digits equals: %.2f", (first + second + third + fourth) / 4.f);

    return 0;
}
