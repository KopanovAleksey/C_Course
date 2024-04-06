#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int* array, int length){
    for (int i = 0; i < length; i++){
        *(array + i) = rand()%1000;
    }
}
void printArray(int* array, int length){
    for (int i = 0; i < length; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}
int secondZero(int* array, int* resArray, int length){
    int counter = 0;
    for(int i = 0; i < length; i++){
        if(*(array + i)/10%10 == 0){
            *(resArray + counter++) = *(array + i);
        }        
    }
    return counter;
}

int main()
{
    enum{Length = 10};
    srand(time(NULL));
    int array[Length], resultArray[Length];
    fillArray(array, Length);
    printArray(array, Length);
    int counter = secondZero(array, resultArray, Length);
    printArray(resultArray, counter);
}
