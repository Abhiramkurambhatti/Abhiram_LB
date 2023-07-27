#include<stdio.h>

void TimeTable(int iStd)
{
	switch(iStd)
	{
		case 1:
		printf("Your exam ar : 11 AM \n");
		break;

		case 2:
		printf("Your exam at : 12 NOON \n");
		break;

		case 3:
		printf("Your exam at : 1 PM \n");
		break;

		case 4:
		printf("Your exam at : 2 PM\n");
		break;

		default:
		printf("Wrong Standard\n");



	} 
}

int main()
{

	int iValue = 0;

	printf("Enter your Standard\n");
	scanf("%d",&iValue);


	TimeTable(iValue);
	return 0;

}