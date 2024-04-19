#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include "sensor.h"

int getInfo(struct sensor* info, char *filename)
{
    int counter = 0, params;
    FILE *f;
    char str[100];
    if((f = fopen(filename, "r")) != NULL){
        while((params = fscanf(f, "%d;%d;%d;%d;%d;%d",
                                            &info[counter].year, &info[counter].month, 
                                            &info[counter].day, &info[counter].hour, 
                                            &info[counter].minute, &info[counter].t)) > 0){
            if(params != 6){
                fscanf(f, "%s", str);
                printf("<Error in %d line of %s!>\n", counter + 1, filename);
            }
            else
                counter++;
        }
    }
    else{
        perror("Cant open file!\n");
    }
    return counter;
}

void printAll(struct sensor* info,int number)
{
    printf("===================================\n");
    for(int i=0;i<number;i++)
        printData(info, i);
}

void printData(struct sensor* info,int i){
    printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
                info[i].year,
                info[i].month,
                info[i].day,
                info[i].hour,
                info[i].minute,
                info[i].t);
}

void monthStat(struct sensor *info, int number, int month){
    int max = -99, min = 99, sum = 0, counter = 0;
    for (int i = 0; i < number; i++){
        if (info[i].month == month){
            counter++;
            if (max < info[i].t)
                max = info[i].t;
            if (min > info[i].t)
                min = info[i].t;
            sum += info[i].t;
        }
    }
    if(counter > 0){
    printf("Month-%d stat: Min: %d; Max: %d; Average: %d\n",month, min, max, sum/counter);
    }
    else{
        printf("No data for this month: %d\n", month);
    }
}

void yearStat(struct sensor *info, int number){
    int max = -99, min = 99, sum = 0;
    for (int i = 0; i < number; i++){
        if (max < info[i].t)
            max = info[i].t;
        if (min > info[i].t)
            min = info[i].t;
        sum += info[i].t;
    }
    printf("Year stat: Min: %d; Max: %d; Average: %d\n",min, max, sum/number);
}

