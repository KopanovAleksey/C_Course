#include<stdio.h>

int main()
{
    int a, counter = 0;
    printf("Enter number: ");
    for (scanf("%d", &a); a > 0; a /= 10){
        counter++;
    }
    printf("Is 3 digit number: ");
    if (counter == 3) 
        printf("Yes");
    else
        printf("No");
    return 0;
}
