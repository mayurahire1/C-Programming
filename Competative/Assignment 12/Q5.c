#include<stdio.h>

int Count(int iNo)
{
   int iDigit = 0;
   int iDigitCount = 0;

   while(iNo != 0)
   {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iDigitCount++;
        }

        iNo = iNo / 10;
   }

   return iDigitCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}