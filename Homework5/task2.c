#include<stdio.h>
#include<inttypes.h>

int nod(int a, int b);

int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    printf("NOD of %d and %d : ", a, b);
    nod(a, b) ? printf("%d", nod(a, b)) : printf("None");
    return 0;
}

int nod (int a, int b){
    for (int i = ((a > b) ? a : b); i > 1; i --){
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 0;
}