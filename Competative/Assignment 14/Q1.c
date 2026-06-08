#include<stdlib.h>
#include<stdio.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
    }

    return iEvenCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("ENter %d Elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("%d", iRet);

    return 0;
}