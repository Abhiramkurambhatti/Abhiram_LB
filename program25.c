//Accept number from user and display its factors addition
//Date: 25/04/2022

//input: 10
//output: 1 2 5 = 8

//input: 9
//output: 1 3 = 4

//input: 17
//output: 1


//input: -20
///ouput: 1 2 4 5 10
/////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
	if(iNo<0)							//updater
	{
		iNo = -iNo;
	}

	int iCnt = 0;
	int iSum = 0;

	for (iCnt = 1; iCnt <= (iNo/2) && (iSum <= iNo); iCnt++)
	{
		if((iNo % iCnt)==0)			//non factor condition = if((iNo % iCnt) != 0)
		{
			
			printf("%d\n",iCnt);

			iSum = iSum+iCnt;
		}
		/*
		if(iSum > iNo)
		{
			break;
		}
		*/
	}
	if(iSum == iNo)
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
	int bRet;

	printf("Enter number:\n");
	scanf("%d",&iValue);

	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("%d is a perfect number\n",iValue);
	}
	else
	{
		printf("%d is not a perfect number\n", iValue);
	}
	return 0;
}