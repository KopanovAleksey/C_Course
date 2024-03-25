#include<stdio.h>

int main()
{
    int number, sum , mult;
    printf("Enter number: ");
    scanf("%d", &number);
    for (int i = 10; i <= number; i++){
        sum = 0;
        mult = 1;
        for (int j = i; j > 0; j /= 10){
            sum += j % 10;
            mult *= j % 10;
        }
        if (sum == mult){
            printf("%d\n", i);
        }
    }
    
    return 0;
}