//count number of factors.


#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for (iCnt = 1; iCnt < iNo/2; iCnt++)
	{
		if (iNo % iCnt == 0)
		{
			iFactCnt++;
		}
	}
	return iFactCnt;
}
bool CheckPrime(int iNo)
{
	int iAns = 0;
	iAns = CountFactor(iNo);
	if (iAns == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = CountFactor(iValue);

	printf("Number of factor are:%d\n",iRet);
	if(iRet == true)
	{
		printf("%d is a perfect number\n",iValue);
	}
	else
	{
		printf("%d is not a perfect number\n", iValue);
	}
	return 0;
}