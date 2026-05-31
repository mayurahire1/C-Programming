#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;

    return iDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d ", iRet);

    return 0;
}