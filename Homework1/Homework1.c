#include <stdio.h>

int main(int argc, char **argv)
{
	//������� 1
	printf("Hello world!\n\n");
	
	//������� 2
	printf("Let's\n\tgo\n\t\tto walk\n\n"); //Escape-������������������ \v �� ��������
	
	//������� 3
	char* tree[]={"   *   ",
				  "  ***  ",
				  " ***** ",
				  "*******",
				  " HH HH ",
				  " ZZZZZ ", NULL};
	for(int i = 0; tree[i];i++)
		printf("%s\n", tree[i]);
	
	//������� 4
	char* honeycomb[]={" _   _ ",
					   "/ \\_/ \\",
					   "\\_/ \\_/",
					   "/ \\_/ \\",
					   "\\_/ \\_/", NULL};
	for(int i = 0; honeycomb[i];i++)
		printf("%s\n", honeycomb[i]);
	
	return 0;
}

