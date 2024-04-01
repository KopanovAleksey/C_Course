#include<stdio.h>

void printAtoB(int A, int B){
    printf("%d ", A);
    if (A > B)
        printAtoB(--A, B);
    else if (A < B)
        printAtoB(++A, B);
}

int main()
{
    int A, B;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &A, &B);
    printAtoB(A, B);
    
}

