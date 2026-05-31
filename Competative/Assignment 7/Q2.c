#include<stdio.h>

int DollerToINR(int iNo)
{
    int iDoller = 0;
    int iINR = 0;

    iDoller = 70;

    iINR = iNo * iDoller;

    return iINR;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Amount in Doller : ");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}