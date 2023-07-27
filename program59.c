//accept the number from user and show the search first occurence.
#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurance(int Arr[] , int iLength , int iNo)
{
    int iCnt=0;
   
    for(iCnt=iLength-1; iCnt >= 0; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            
            break;
        }
    }
        return iCnt;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iValue=0;
    int iRet;

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

    iRet=SearchFirstOccurance(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("ELEMENT IS NOT THERE IN ARRAY");
       
    }
    else
    {
          printf("ELEMENT IS THERE IN ARRAY:%d\n",iRet);
    }

    free(ptr);
    return 0;
}