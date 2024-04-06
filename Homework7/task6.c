#include <stdio.h>

void fillArray(int* array, int length){
    for (int i = 0; i < length; i++){
        scanf("%d", array + i);
    }
}
void printArray(int* array, int length){
    for (int i = 0; i < length; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}
int frequentOfAll(int* array, int length){
    int index_max = 0;
    int countArr[length];
    for (int i = 0; i< length; i++){
        *(countArr + i) = 0;
    }
    for(int i = 0; i < length; i++){
        for(int j = i; j < length; j++){
            if (*(array + i) == *(array + j)){
                countArr[i]++;
            }
        }
    }
    
    for (int i = 0; i < length; i++) {
        if(*(countArr + i) > *(countArr + index_max)){
            index_max =  i;
        }
    }
    return *(array + index_max);
}

int main()
{
    enum{Length = 10};
    int array[Length];
    fillArray(array, Length);
    printArray(array, Length);
    int number = frequentOfAll(array, Length);
    printf("%d", number);
}
