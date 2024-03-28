#include<stdio.h>

int sum1ToN(int n);

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Sum from 1 to %d ? : %d\n", a, sum1ToN(a));
    return 0;
}

int sum1ToN (int n){
    return (1 + n) * n / 2;
}