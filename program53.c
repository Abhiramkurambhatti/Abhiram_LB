//Perform largest number in array.


#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iNo)
{
	int iCnt =0, iMax = Arr[0];
 
	for (iCnt = 0; iCnt < iNo; iCnt++)
	{
		 if (iMax < Arr[iCnt]) 
		 {
		      iMax = Arr[iCnt];
       	 }
  	}
  	return iMax;
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

	iRet = Maximum(ptr,iSize);

	printf("Maximum value is:%d\n",iRet);

	return 0; 
}