#include<stdio.h>

void sort_array(int size, int a[]){
    for (int i = 0; i < size; i ++){
        for (int j = 1; j < size - i; j++ ){
            if(*(a + j - 1) > *(a + j)){
                int temp = *(a + j - 1);
                *(a + j - 1) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}
int main()
{
    int array[10] = {1, 2 , 3, 7, 5, 6, 4, 9, 8, 1};
    int length = sizeof(array)/ sizeof(*array);
    sort_array( length, array);
    for(int i = 0; i < length; i++){
        printf("%d ", *(array + i));
    }
    return 0;
}