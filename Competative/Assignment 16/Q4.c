#include<stdio.h>
#include<stdlib.h>

int CountDigit(int iNo)
{
    int iDigitCount = 0;

    while(iNo != 0)
    {
        iDigitCount++;
        iNo = iNo / 10;
    }

    return iDigitCount;
}

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(CountDigit(Arr[iCnt]) == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
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

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements: \n", iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    Digits(Brr, iLength);


    free(Brr);

    return 0;
}