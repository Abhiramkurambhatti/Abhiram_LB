#include<stdio.h>

int main()
{
	//arr is 1D array, which contains 5 elements, and each elements is type of int

	auto int Arr[5];

	printf("Enter element: \n");
	scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);

	printf("element of array are:\n");

	printf("%d\n", Arr[0]);
	printf("%d\n", Arr[1]);
	printf("%d\n", Arr[2]);
	printf("%d\n", Arr[3]);
	printf("%d\n", Arr[4]);

	return 0;

}


