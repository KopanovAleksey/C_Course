#include<stdio.h>

long long int riceOnCheckMateBoard(int n);

int main()
{
    int n;
    printf("Enter chess square number (1 - 64): ");
    scanf("%d", &n);
    printf("Amount on the %d square: %llu\n", n, riceOnCheckMateBoard(n));
    return 0;
}

long long int riceOnCheckMateBoard(int n){
    long long int result = 1;
    for(;n > 1; n--){
        result *= 2;
    }
    return result;
}