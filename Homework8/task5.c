#include<stdio.h>

void change_max_min(int size, int a[]){
    int max = 0, min = 0;
    for(int i = 0; i < size; i++){
        if(a[i] > a[max]) max = i;
        if(a[i] < a[min]) min = i;
    }
    int temp = a[max];
    a[max] = a[min];
    a[min] = temp;
}


int main()
{
    int array[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array)/ sizeof(*array);
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    change_max_min( length, array);
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    return 0;
}