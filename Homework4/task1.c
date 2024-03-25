
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int a, b , sum = 0;
    printf("Enter 2 numbers:");
    scanf("%d%d", &a , &b);
    for ( int i = a; i <= b; i++){
        sum += i * i;
    }
    printf("Sum of the square numbers from %d to %d  equal: %d", a, b, sum);
    return 0;
}
