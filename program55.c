//Check the counter of array of n number.


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iNo,int iLength)
{
	int iCnt=0, iFrequency = 0;

	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if (Arr[iCnt] == iNo)
		{
			iFrequency++;
		}
	}
	//return iFrequency;

}
int main()
{
	int iSize = 0,iCnt =0,iRet = 0,iValue=0; 
	int *ptr =NULL;

	printf("Enter number:\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(iSize * sizeof(int));

	printf("Enter values:\n");

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the element to calculate the frequency\n");
	scanf("%d",&iValue);

	iRet = Frequency(ptr,iSize,iValue);

	printf("Maximum value is:%d\n",iRet);

	return 0; 
}