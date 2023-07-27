//count the digits 

#include<stdio.h>

int  Display(int iNo)
{

	int iCnt = 0;

	while(iNo > 0)
	{
		iCnt ++;
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue;
	int iRet;
	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = Display(iValue);

	printf("No of Digits :%d\n",iRet);
	return 0;
}