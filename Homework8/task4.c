#include<stdio.h>

int is_two_num(int size, int a[]){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j ++){
            if (*(a + i) == *(a + j)){
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    int array[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 1};
    int length = sizeof(array)/ sizeof(*array);
    int num = is_two_num( length, array);
    printf("%s ", num ? "Yes" : "No");
    return 0;
}