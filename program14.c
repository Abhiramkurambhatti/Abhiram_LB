//Program to Display 1 to 5 on screen
//Output 1 2 3 4 5  
//for loop
#include<stdio.h>
void Display(int iNo)
{
	int iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt<=iNo; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}