#include <stdint.h>
#define SIZE 1000000
struct sensor {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
};

int getInfo(struct sensor *info, char *filename);
void printAll(struct sensor *info,int number);
void printData(struct sensor *info, int i);
void monthStat(struct sensor *info, int number, int month);
void yearStat(struct sensor *info, int number);