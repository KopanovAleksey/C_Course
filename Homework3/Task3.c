#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Print 3 int numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("Numbers in ascending order ? : ");
    if ( a <= b && b <= c)
        printf("Yes");
    else 
        printf("No");
    
    return 0;
}