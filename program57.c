//CHECK WHETHER THE NUMBER IS PRESENT IN THE ARRAY OR NOT
//WITHOUT USING FLAG 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[] , int iLength , int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    int iValue=0;
    bool bRet;

    printf("Enter No Of Elements :\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));

    printf("Enter The Elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter The Element To Search:\n");
    scanf("%d",&iValue);

    bRet=Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("ELEMENT IS THERE IN ARRAY");
    }
    else
    {
         printf("ELEMENT IS NOT THERE IN ARRAY");
    }
    free(ptr);
    return 0;
}