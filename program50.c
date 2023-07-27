#include <stdio.h>
#include <stdlib.h>


void DisplayEven(int Arr[],int iLength)
{
		int iCnt = 0;
		printf("Even elements are:\n");

		for (iCnt = 0; iCnt < iLength; iCnt++)
		{
			if (Arr[iCnt] % 2 == 0)
			{
				printf("%d\n",Arr[iCnt]);
			}
		}
}
int main()
{
	int iSize =0,iCnt=0;
	int *ptr = NULL;

	printf("Enter number of elements:\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter the value of array :\n");
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);

	}


	DisplayEven(ptr,iSize);
	return 0;


}

/*
-----------------------------------------------------------------------------
__Steps to solve Problems on N numbers___									|
-----------------------------------------------------------------------------
	Step 1: Accept the size of array from user 								|

	Step 2: Allocate the memory dynamically for that array.return			|

	Step 3: Accept the value from user and store in the array.	
				|
	Step 4: Pass that array and size to the function(Logic)					|

	Step 5:Deallocate memory of that array.									|
																			|
-----------------------------------------------------------------------------																			
*/