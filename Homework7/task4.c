#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int* array, int length){
    for (int i = 0; i < length; i++){
        *(array + i) = rand()%100;
    }
}
void printArray(int* array, int length){
    for (int i = 0; i < length; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}
void swap(int* n1, int* n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void sortArrayByLastNum(int* array, int length){
    for(int i = 0; i < length;i++){
        for(int j = i; j < length; j++){
            if(*(array + i)%10 > *(array + j)%10){
                swap(array+i, array + j);
            }
        }
    }
}
int main()
{
    enum{Length = 10};
    srand(time(NULL));
    int array[Length];
    fillArray(array, Length);
    printArray(array, Length);
    sortArrayByLastNum(array, Length);
    printArray(array, Length);
}
