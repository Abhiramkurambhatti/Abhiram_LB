//Perform smaller number in array.


#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iNo)
{
	int iCnt =0, iMin = Arr[0];
 
	for (iCnt = 0; iCnt < iNo; iCnt++)
	{
		 if (iMin > Arr[iCnt]) 
		 {
		      iMin= Arr[iCnt];
       	 }
  	}
  	return iMin;
}
int main()
{
	int iSize = 0,iCnt =0,iRet = 0; 
	int *ptr =NULL;

	printf("Enter number:\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(iSize * sizeof(int));

	printf("Enter values:\n");

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = Minimum(ptr,iSize);

	printf("Maximum value is:%d\n",iRet);

	return 0; 
}