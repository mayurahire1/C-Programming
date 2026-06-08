#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bIsEleven = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bIsEleven = TRUE;
        }
    }

    return bIsEleven;
}
int main()
{
    int iCnt = 0, iSize = 0;
    BOOL bRet = FALSE;
    int* p = NULL;

    printf("Ente how many elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("ENter %d elements: ", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    return 0;
}