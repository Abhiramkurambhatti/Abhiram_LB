
#include<stdio.h>
int summation(int iNo)
{
	int iSum = 0;
	int iCnt = 0;


	 if(iNo<0)
	 {
	 	iNo=-iNo;
	 }

	 for(iCnt=1; iCnt<=iNo; iCnt++)
	 {
	 	iSum = iSum + iCnt;

	 }
	 return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number:\n");
	scanf("%d",&iValue);

	iRet = summation(iValue);
	printf("summation is :%d\n",iRet);

	return 0;
}