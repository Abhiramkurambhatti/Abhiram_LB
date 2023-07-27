//Addition of n number 

#include <stdio.h>
#include<stdlib.h>
int Addition(int Arr[],int iLength)
{
		int iCnt = 0, iAdd = 0;

		for (iCnt = 0; iCnt < iLength; iCnt++)
		{
			iAdd = iAdd + Arr[iCnt];
		}
		return iAdd;

}

int main()
{
	int iSize=0,iCnt=0;
	int *ptr= NULL;
	int iRet = 0;

	printf("ENter number:\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter the value:\n");
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = Addition(ptr,iSize);

	printf("Addition is:%d\n",iRet);

	free(ptr);

	return 0;
}