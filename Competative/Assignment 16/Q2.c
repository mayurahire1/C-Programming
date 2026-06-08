#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(Brr, iLength);

    printf("Minimum number is: %d ", iRet);

    free(Brr);

    return 0;
}