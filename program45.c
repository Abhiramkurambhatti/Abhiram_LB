#include<stdio.h>


void Display(int ptr[])					//passing pointer address
{
	int iCnt=0;
	printf("element of array are:\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n", *ptr);
		ptr++;								//pointer arithmetic
	}

}

int main()
{
	auto int Arr[5];
	register int iCnt = 0;

	printf("Enter element: \n");
	
	for (iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}


	Display(Arr);		//Display(100)<- base address of arr

	return 0;


}


