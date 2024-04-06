#include<stdio.h>

void fillArray(int* array, int size){
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
}

int findMin(int* array, int size){
    int min = *array;
    for(int i = 0; i < size; i++){
        if (*(array + i) < min) min = *(array + i);
    }
    return min; 
}

int main()
{
    int array[5];
    int size = sizeof(array)/sizeof(array[0]);
    fillArray(array, size);
    int min = findMin(array, size);
    printf("%d", min);
    return 0;
}
