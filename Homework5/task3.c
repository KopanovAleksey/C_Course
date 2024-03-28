#include<stdio.h>
#include<inttypes.h>

int isHappyNumber(int number);

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Is Happy ? : %s\n", isHappyNumber(a) ? "Yes" : "No");
    return 0;
}

int isHappyNumber (int number){
    int sum = 0, mult = 1;
    for (;number > 0; number /= 10){
        mult *= number%10;
        sum += number%10;
    }
    if (sum == mult)
        return 1;
    return 0;
}