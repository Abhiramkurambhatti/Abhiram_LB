#include<stdio.h>

int main()
{
	//arr is 1D array, which contains 5 elements, and each elements is type of int

	auto int Arr[5];
	register int iCnt = 0;

	printf("Enter element: \n");
	
	for (iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}


	printf("element of array are:\n");
	for (iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}

	return 0;


}


