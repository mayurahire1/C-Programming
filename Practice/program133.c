#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Time Complexity : O(N)

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0; 
    bool bRet = false;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements: ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }    

    printf("Enter the element that you want to search: ");
    scanf("%d", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("element is present");
    }
    else
    {
        printf("element is not present");
    }

    free(Brr);

    return 0;
}