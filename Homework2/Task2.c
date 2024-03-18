#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Task 2

    int a, b, c;
    printf("Print 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d + %d + %d = %d\n",a, b, c, a + b + c);
    printf("%d * %d * %d = %d\n",a, b, c, a * b * c);
    return 0;
}