#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }

    return iProduct;
}

int main()
{
    int iCnt = 0, iLength = 0, iRet = 0;
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

    iRet = Product(Brr, iLength);

    printf("Product is %d ", iRet);

    free(Brr);

    return 0;
}