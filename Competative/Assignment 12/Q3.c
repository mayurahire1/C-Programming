#include<stdio.h>

int CountTwo(int iNo)
{
   int iDigit = 0;
   int iTwoCount = 0;

   while(iNo != 0)
   {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iTwoCount++;
        }

        iNo = iNo / 10;
   }

   return iTwoCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}