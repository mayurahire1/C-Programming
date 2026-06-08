#include <stdio.h>
#include <stdlib.h>

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = SumDigit(Arr[iCnt]);
        printf("%d\t", iSum);
    }
}

int main()
{
    int iCnt = 0, iLength = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if (Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements: \n", iLength);
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    Digits(Brr, iLength);

    free(Brr);

    return 0;
}