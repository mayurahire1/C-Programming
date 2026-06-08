#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL iIsNo = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIsNo = TRUE;
        }
    }
    return iIsNo;

}

int main()
{
    int iCnt = 0;
    int iSize = 0;
    int iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter a number to Check: ");
    scanf("%d", &iValue);
    
    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}