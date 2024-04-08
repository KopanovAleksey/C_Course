#include<stdio.h>

void sort_even_odd(int size, int a[]){
    for(int j = 1; j < size; j++){
        if (a[j] %2 == 0 && a[j - 1] %2 != 0){
            int temp = *(a + j );
            *(a + j) = *(a + j - 1);
            *(a + j - 1) = temp;
            --j;
            --j;
        }
    }
}


int main()
{
    int array[10] = {1, 1 , 1, 1, 2, 4, 6, 8, 2, 9};
    int length = sizeof(array)/ sizeof(*array);
    sort_even_odd( length, array);
    for(int i = 0; i < length; i++){
        printf("%d ", *(array + i));
    }
    return 0;
}