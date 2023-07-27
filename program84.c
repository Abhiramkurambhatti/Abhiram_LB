// Input 	Row = 4 	Columns = 4
/*
	*
	* *
	* * *
	* * * *
	* * * * * 
	* * * *
	* * *
	*

*/

#include<stdio.h>
void Display(int iRow , int iCol )
{
    int i=0;
    int j=0;
    for(i=2;i<=iRow;i++)
    {
        for(j=1;j<=i;j++)
        {
               printf("*\t");
        }
        printf("\n");
    }      
    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
               printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter No Of Rows:\n");
    scanf("%d",&iValue1);
    printf("Enter No Of Columns:\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}