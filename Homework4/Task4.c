#include<stdio.h>

int main()
{
    int number, reNumber = 0;
    printf("Enter number: ");
    for (scanf("%d", &number); number > 0; number /= 10){
        reNumber*=10;
        reNumber+= number%10;
    }
    printf("Reversed number: %d", reNumber);
    
    return 0;
}
