#include <stdio.h>
#include <string.h>

void input(char *str)
{
    FILE *in;
    if((in = fopen("input.txt", "r")) == NULL){
        perror("Can't open file");
    }
    else{
        fscanf(in,"%[^\n]", str);
        fclose(in);
    }
}
void output(int *nums, int count)
{
    FILE *out;
    if((out = fopen("output.txt", "w")) == NULL){
        perror("Can't open file");
    }
    else{
        for (int i = 0; i < count; i++)
        {
            fprintf(out, "%d ", nums[i]);
        }
        fclose(out);
    }
}

void sort(int *array, int length){
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (array[i] > array[j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

int getNumbers(char *strIn, int *nums){
    int number = 0;
    int countNumbers = 0;
    for(int i = 0; i < strlen(strIn); i++){
        if(strIn[i] <= '9' && strIn[i] >= '0')
            number = number*10 + strIn[i] - '0';
        else{
            if (number == 0 && strIn[i-1] != '0')
                continue;
            else{
                nums[countNumbers++] = number;
                number = 0;
            }
        }   
    }
    return countNumbers;
}

int main(int argc, char const *argv[])
{
    char strIn[1000] = "";
    input(strIn);
    printf("%s\n", strIn);
    int nums[1000];
    int count = getNumbers(strIn, nums);
    sort(nums, count);    
    output(nums, count);
    return 0;
}