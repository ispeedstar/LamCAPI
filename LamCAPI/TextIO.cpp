#include <stdio.h>
#include "TextIO.h"

void TextIO_test()
{
	printf("Start Application\n");
	char *filename="C:\\Projects\\exer\\VS2010\\Data\\cppUserInfo.out";
	write_file(filename);
	filename = "C:\\Projects\\exer\\VS2010\\Data\\userInfo.txt";
	read_file(filename);
	printf("End Application");
}

void read_file(char *filename)
{
	// open read file
	char line[80];
	FILE *fp;
	fp = fopen(filename,"r");
	if (fp == NULL)
	{
		printf("Error: could not open file %s",filename);
	}
	else
	{
		while(fscanf(fp,"%s",line)!=EOF)
		{
			printf("%s",line);
		}
		fclose(fp);
	}
}

void write_file(char *filename)
{
	// open file
	FILE *fp;
	fp = fopen(filename,"w");
	if (fp == NULL)
	{
		printf("Error: could not open file %s",filename);
	}
	else
	{
		fprintf(fp,"LastName = Lam\n");
		fprintf(fp,"FirstName = Stanley\n");
		fprintf(fp,"Title = Software Engineer\n");
		fclose(fp);
	}
}