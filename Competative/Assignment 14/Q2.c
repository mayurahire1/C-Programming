#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCount = 0;
    int iOddCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }

    return (iEvenCount - iOddCount);
}


int main()
{
    int iCnt = 0; 
    int iSize = 0;
    int iRet = 0;
    int * p = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements: ", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("%d", iRet);

    return 0;
}