#include<stdio.h>

unsigned long int numberBinary(int n){
    if(n == 0) return 0;
    return n%2 + numberBinary(n/2)*10;
}

int count1InBinary(int binaryN){
     if (binaryN == 0)
        return 0;
    return binaryN%10 + count1InBinary(binaryN/10);
}


int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    unsigned long int bn = numberBinary(n);
    printf("There are %d '1st' numbers in %d binary representation (%ld).", count1InBinary(bn), n, bn);
    
}

