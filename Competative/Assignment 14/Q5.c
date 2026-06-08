#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iNoCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iNoCount++;
        }
    }

    return iNoCount;
}

int main()
{
    int iSize = 0, iValue = 0;
    int iRet = 0, iCnt = 0;
    int * p = NULL;

    printf("Enter the Number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements: ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter element want to count: ");
    scanf("%d", &iValue);

    iRet = Frequency(p, iSize, iValue);

    printf("%d", iRet);

}