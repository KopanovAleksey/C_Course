#include<stdio.h>

int average_of_diagonal(int size, int a[][size]){
    int sum = 0;
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i == j){
		        sum += *(*(a + i) + j);
		    }	
        }
    }
    printf("%d\n", sum);
    return sum/size;
}


int main()
{
    enum{ Length = 5};
    int array[][Length] =  {{1,1,1,1,1},
                                  {2,2,2,2,2},
                                  {3,3,3,3,3},
                                  {4,4,4,4,4},
                                  {5,5,5,5,5}};
    
    int average = average_of_diagonal(Length, array);
    printf("%d\n", average);
    int* final = array[0] + Length*Length - 1;
    int count = 0;
    for(int *ptr =array[0]; ptr <= final; ptr++){
        if(*ptr > average)
            count++;
    }
    printf("%d", count);
    return 0;
}