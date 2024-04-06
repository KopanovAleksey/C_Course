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
void move_left(int* array, int length){
    int temp = *(array);
    for(int i = 0; i < length - 1; i++){
        *(array + i) = *(array + i + 1);
    }
    *(array + length - 1) = temp;
}
void move_right(int* array, int length){
    int temp = *(array + length - 1);
    for(int i = length - 1; i > 0; i--){
        *(array + i) = *(array + i - 1);
    }
    *array = temp; 
}
void moveArray(int *array, int length,int direction, int count){
    for(int i = 0; i < count; i++){
        if(direction == 1){
            move_right(array, length);
        }
        else if (direction == -1){
            move_left(array, length);
        }
    }
}
int main()
{
    enum{Length = 12};
    srand(time(NULL));
    int array[Length];
    fillArray(array, Length);
    printArray(array, Length);
    moveArray(array, Length, 1, 4);
    printArray(array, Length);
}
