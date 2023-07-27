//Check the counter of array of n number.
//with flag

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iNo,int iLength)
{
	int iCnt=0;
	bool bFlag = false;

	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if (Arr[iCnt] == iNo)
		{
			bFlag = true;
			break;
		}
	}
	return bFlag;
}
int main()
{
	int iSize = 0,iCnt =0,iValue=0; 
	int *ptr =NULL;
	bool bRet;

	printf("Enter number:\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(iSize * sizeof(int));

	printf("Enter values:\n");

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the element to search the number\n");
	scanf("%d",&iValue);

	bRet = Search(ptr,iSize,iValue);
	if (bRet == true)
	{
		printf("element is there in array\n");
	}
	else
	{
		printf("element is not there in array\n");
	}	

	free(ptr);
	return 0; 
}