//Input : 5
//outpt: 5 * 4 * 3 *  2  *  1
//Complexity o(N)

#include <stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
	 	printf("%d\t*\t",iCnt);

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