#include <stdio.h>

int main(int argc, char **argv)
{
	//Задание 1
	printf("Hello world!\n\n");
	
	//Задание 2
	printf("Let's\n\tgo\n\t\tto walk\n\n"); //Escape-последовательность \v не работает
	
	//Задание 3
	char* tree[]={"   *   ",
				  "  ***  ",
				  " ***** ",
				  "*******",
				  " HH HH ",
				  " ZZZZZ ", NULL};
	for(int i = 0; tree[i];i++)
		printf("%s\n", tree[i]);
	
	//Задание 4
	char* honeycomb[]={" _   _ ",
					   "/ \\_/ \\",
					   "\\_/ \\_/",
					   "/ \\_/ \\",
					   "\\_/ \\_/", NULL};
	for(int i = 0; honeycomb[i];i++)
		printf("%s\n", honeycomb[i]);
	
	return 0;
}

