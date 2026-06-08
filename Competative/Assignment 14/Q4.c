#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iElevenCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iElevenCount++;
        }
    }

    return iElevenCount;
}
int main()
{
    int iCnt = 0, iSize = 0;
    int iRet = 0;
    int* p = NULL;

    printf("Ente how many elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("ENter %d elements: ", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("%d", iRet);

    return 0;
}