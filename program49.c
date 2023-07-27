#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iLength)					//passing pointer address
{
	int iCnt=0;
	printf("element of array are:\n");

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		printf("%d\n", Arr[iCnt]);
									
	}

}

int main()
{
	//auto int Brr[5];				//static memory allocation

	int *ptr = NULL;
	int iSize = 0;
	register int iCnt = 0;


	printf("Enter the number of element: \n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter element\n");

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}


	Display(ptr,iSize);		//Display(100,4)<- base address of arr, size of array (4)
	free(ptr);		//free(100);
	return 0;


}


