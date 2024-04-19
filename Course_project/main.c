#include <stdlib.h>
#include <inttypes.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "sensor.h"

int main(int argc, char *argv[])
{
    char filename[100] = "";
    int result = 0, number = 0;
    struct sensor *info = malloc(SIZE * sizeof(struct sensor));
    if((result = getopt(argc, argv, "hf:pym:")) == -1){
        result = 'h';
    }
    do{
        switch (result){
            case '?':
            case 'h': 
                printf("Help info:\n"
                        "-h help information;\n"
                        "-f <filename> open data file;\n"
                        "-p print all data;\n"
                        "-y print all month and year statisatics;\n"
                        "-m <month_number> print selected month statistics.\n");
                break;
            case 'f':
                strcpy(filename,optarg);
                number = getInfo(info, filename);
                printf("<Data loaded successfully!>\n");
                break;
            case 'y':
                for(int i = 1; i <= 12; i++){
                    monthStat(info, number, i);
                }
                yearStat(info, number);
                break;
            case 'm':
                monthStat(info, number, atoi(optarg));
                break;
  
        }
    }  while((result = getopt(argc, argv, "hf:pym:")) != -1);
    free(info);

    return 0;
}