#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iNo1 && Arr[iCnt] <= iNo2)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iLength = 0, iValue1 = 0, iValue2 = 0;
    int *Brr = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : ", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    
    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    Range(Brr, iLength, iValue1, iValue2);

    return 0;
}