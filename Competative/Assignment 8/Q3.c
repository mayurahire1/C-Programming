#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iDistance = 0;

    iDistance = iNo * 1000;
    
    return iDistance;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter : %d", iRet);

    return 0;
}