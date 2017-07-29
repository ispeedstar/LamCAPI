#include <stdio.h>
#include "MyTest.h"
#include "TextIO.h"

void DoTestIO()
{
	printf("Start Application\n");
	char *filename="C:\\Projects\\exer\\VS2010\\Data\\cppUserInfo.out";
	write_file(filename);
	filename = "C:\\Projects\\exer\\VS2010\\Data\\userInfo.txt";
	read_file(filename);
	printf("End Application");
}