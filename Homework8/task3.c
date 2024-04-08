#include<stdio.h>

int find_max_array(int size, int a[]){
    int max = *a;
    for(int i = 1; i < size; i++){
        if (*(a + i) > max){
            max = *(a + i);
        }
    }
    return max;
}


int main()
{
    int array[10] = {1, 1 , 1, 1, 2, 4, 6, 8, 2, 9};
    int length = sizeof(array)/ sizeof(*array);
    int max = find_max_array( length, array);
    printf("%d ", max);
    return 0;
}