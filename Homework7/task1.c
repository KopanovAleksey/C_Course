#include<stdio.h>

void fillArray(int* array, int size){
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
}

double findAverage(int* array, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(array + i);
    }
    return sum/(double)size; 
}

int main()
{
    int array[5];
    int size = sizeof(array)/sizeof(array[0]);
    fillArray(array, size);
    double average = findAverage(array, size);
    printf("%lf", average);
    return 0;
}
