#include "MyStruct.h"

Bin myBin;

void MyStruct_test()
{
	myBin.val1 = 0;
	myBin.val2 = 0;
	SetStruct(myBin);

	myBin = GetStruct();
}

void SetStruct(Bin &bin)
{
	bin.val1 = 1;
	bin.val2 = 2;
}

Bin GetStruct()
{
	return(myBin);
}

void setA(int &val)
{
	val = 1;
}

MyVar *myStruct;

void SetupStruct()
{
	myStruct = new MyVar();
	myStruct->iData = 0;
	myStruct->str = "ABC";
}


void GetMyStruct(MyVar *var)
{
	int a = var->iData;
	char *b = var->str;
}

void SetMyStruct(MyVar &var)
{
	var.iData = 2;
	var.str = "DEF";
}

void TestMyStruct()
{
	SetupStruct();
	GetMyStruct(myStruct);
	SetMyStruct(myStruct[0]);
}