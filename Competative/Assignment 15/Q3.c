#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iNoOcc = -1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iNoOcc = iCnt;
        }
    }
    return iNoOcc;
}

int main()
{
    int iCnt = 0;
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter a number to Check: ");
    scanf("%d", &iValue);
    
    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurence of number is %d",iRet);    
    }

    free(p);

    return 0;
}