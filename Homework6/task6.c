#include<stdio.h>

long long int recurs_power(int n, int p){
    if ( p == 0){
        return 1;
    }
    return n * recurs_power(n, p - 1);
}

int main()
{
    int n, p;
    scanf("%d%d", &n,&p);
    printf("%d ^ %d = %lld", n, p, recurs_power(n, p));
    return 0;
}
