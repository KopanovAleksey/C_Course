#include <stdio.h>

int main()
{
    int month;
    
    printf("Print month number (1 - 12):\n");
    scanf("%d", &month);
    printf("Time of the year: ");
    
    if (month < 1 || month > 12)
        printf("Wrong input !");
    else if (month <= 5 && month >= 3)
        printf("Spring !");
    else if (month <= 8 && month >= 6)
        printf("Summer !");
    else if (month <= 11 && month >= 9)
        printf("Autumn !");
    else 
        printf("Winter !");
}