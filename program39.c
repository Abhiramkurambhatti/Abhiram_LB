/// GOLDEN PROGRAM ///////////

// accept number a and b it returns a^b.
// ex: 2 	4 	=  16
//////////////////////
//Algorithm
/*
	START:
		Accept one number as no1
		Accept another number as no2
	
		Create one variable as Mult
		Set the value 1 in the variable Mult

		Create one countre as cnt
		Set the counter to 1

		Itreate till the counter is less than or equal to no2
		mult = Mult * no1
		increment the counter by 1

		Continue

		Display the value of mult

	END

	if
	no1=2
	no2=4
	mult=1


	mult = mult * no1
	mult = mult * no1
	mult = mult * no1
	mult = mult * no1

	for(cnt=1; cnt<=no2l cnt++)
	{
	mult = mult * no1;
	}

*/

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Power(int iNo1, int iNo2)
{
	ULONG iMult=1;
	register int iCnt=0;

	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}

	return iMult;

}

int main()
{
	auto int iValue1 = 0,iValue2 = 0;
	auto ULONG iRet = 0;

	printf("Enter the first number\n");
	scanf("%d",&iValue1);

	printf("Enter the second number\n");
	scanf("%d",&iValue2);

	iRet = Power(iValue1, iValue2);

	printf("Result is: %ld\n", iRet);

	return 0;
}