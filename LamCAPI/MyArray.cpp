#include "MyArray.h"

void MyArray_test()
{
	int sum;
	int arr1[5]={1,2,3,4,5};
	int *arr1_ptr = &arr1[0];
	sum = SumArray(arr1,5);
	sum = SumArrayPtr(arr1_ptr, 5);
}



int SumArray(int arr[], int size)
{
	int sum = 0;
	for(int i=0; i<size; i++)
	{
		sum = sum + arr[i];
	}
	return(sum);
}


int SumArrayPtr(int *arr_ptr, int size)
{
	int sum = 0;
	for(int i=0; i<size; i++)
	{
		sum = sum + *(arr_ptr+i);
	}
	return(sum);
}