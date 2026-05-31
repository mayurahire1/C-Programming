#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCels = 0.0;

    dCels =  (fTemp - 32) * (5.0 / 9.0);

    return dCels;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temprature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temrature in Celius: %f", dRet);
 
    return 0;
}