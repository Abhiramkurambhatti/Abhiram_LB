//Input : 4
//outpt: 1 2 3 4 4 3 2 1 
//Complexity o(2N)

#include <stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
	 	printf("%d\t",iCnt);

	}
	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
	 	printf("%d\t",iCnt);

	}


}

int main()
{
	int iValue = 0;

	printf("Please enter the values:\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}